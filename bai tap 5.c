#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
//ham kiem tra so nguyen to
int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int choice;
	bool check;
	do{
		printf("1.Nhap gia tri phan tu cua mang\n");
		printf("2.In gia tri phan tu mang theo ma tran\n");
		printf("3.In ra phan tu goc theo ma tran\n");
		printf("4.In ra phan tu nam tren duong bien theo ma tran\n");
		printf("5.In ra phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6.In ra phan tu la so nguyen to theo ma tran\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
		            for(int j=0;j<m;j++){
			            printf("a[%d][%d]=",i,j);
			            scanf("%d",&a[i][j]);
		            }		  
	            }
				break;
			case 2:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if((i==0&&j==0)||(i==0&&j==n-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1)){
							printf("%d\t",a[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 4:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0||i==n-1||j==0||j==m-1){
							printf("%d\t",a[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 5:
				if(m!=n){
					printf("Khong co phan tu tren duong cheo chinh va cheo phu");
				}else{
					//duong cheo chinh
					for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==j){
							printf("%d\t",a[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				//duong cheo phu
				    	for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i+j==m){
							printf("%d\t",a[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				}				
				break;
			case 6:
					for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(prime(a[i][j])){
							printf("%d\t",a[i][j]);
						}else{
							printf("0\t");
						}
					}
					printf("\n");
				}
				break;
			case 7:
				exit(0);
			default:
				printf("Lua chon tu 1 den 7");
		}		
	}while(1==1);
}
