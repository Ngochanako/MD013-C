
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
//ham in phan tu cua mang
int print(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//ham kiem tra so nguyen to
int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
//ham tang dan
void incSort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
//ham giam dan
void ascSort(int a[],int n){
	for(int i=0;i<n;i++){
		int j=i-1;
		int temp=a[i];
		while(a[i]>a[j]&&j>=0){			
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main(){
	int n;
	int a[n];
	int choice,choiceSort;
	int currentIndex=0;
	int indexAddValue,indexUpdate,indexDelete;
	int addValue,updateValue,lookValue;
	int start,end,mid;
	do{
		printf("1.Nhap so phan tu va gia tri phan tu\n");
		printf("2.In ra gia tri phan tu dang quan ly\n");
		printf("3.Them mot phan tu vao vi tri chi dinh\n");
		printf("4.Sua mot phan tu o vi tri chi dinh\n");
		printf("5.Xoa mot phan tu o vi tri chi dinh\n");
		printf("6.Sap xep cac phan tu\n");
		printf("7.Giam dan\n");
		printf("8.Tang dan\n");
		printf("9.Tim kiem phan tu nhap vao");
		printf("10.Thoat");
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				scanf("%d",&n);
	            for(int i=0;i<n;i++){
	            	printf("a[%d]=",currentIndex);
		            scanf("%d",&a[currentIndex]);
		            currentIndex++;
	            }
				break;
			case 2:
				for(int i=0;i<currentIndex;i++){
				    printf("%d\t",a[i]);
				}
				break;
			case 3:			
				scanf("%d%d",&indexAddValue,&addValue);
				if(indexAddValue>=currentIndex){
					for(int i=currentIndex;i<indexAddValue;i++){
						a[i]=0;
					}
					a[indexAddValue]=addValue;
					currentIndex=indexAddValue+1;
				}else{
					for(int i=currentIndex;i>indexAddValue;i--){
						a[i+1]=a[i];
					}
					a[indexAddValue]=addValue;
					currentIndex++;
				}
				break;
			case 4:
			    scanf("%d%d",&indexUpdate,&updateValue);
			    if(indexUpdate<0||indexUpdate>=currentIndex){
			    	printf("Invalid");
				}else{
				    a[indexUpdate]=updateValue;	
				}			    
				break;
			case 5:
				scanf("%d",&indexDelete);
				if(indexDelete<0||indexDelete>=currentIndex){
			    	printf("Khong xoa duoc");
				}else{
				    for(int i=indexDelete;i<currentIndex-1;i++){
				    	a[i]=a[i+1];
				    	a[currentIndex-1]=0;
					}
					currentIndex--;	
				}	
				break;
			case 6:
				do{
					printf("1.Giam dan");
					printf("2.Tang dan");
					printf("Lua chon cua ban la:");
					scanf("%d",&choiceSort);
					switch(choiceSort){
						case 1:
							ascSort(a,currentIndex);
						    break;
						case 2:
							incSort(a,currentIndex);
						default:
							printf("Lua chon 1 den 2");
					}
				}while(1==1);
				break;
			case 7:
				ascSort(a,currentIndex);
				break;
			case 8:
				incSort(a,currentIndex);
				break;
			case 9:
				scanf("%d",&lookValue);
				//tim kiem tuyen tinh
				for(int i=0;i<n;i++){
					if(a[i]=lookValue){
						printf("Phan tu thu %d co gia tri bang %d",i,lookValue);
					}
				}
				print(a,currentIndex);
				//tim kiem nhi phan 
				//sap xep mang giam dan
				start=0;
				end=currentIndex-1;
				
				ascSort(a,currentIndex);
				while(start<=end){
					mid=(start+end)/2;
					if(a[mid]==lookValue){
						break;
					}else if(a[mid]>lookValue){
						start=mid+1;
					} else{
						end=mid-1;
					}
				}
				printf("Phan tu thu %d cua mang co gia tri bang %d",mid,lookValue);
			default:
				printf("Lua chon tu 1 den 7");
		}		
	}while(1==1);
}
