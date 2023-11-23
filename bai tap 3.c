#include<stdio.h>
#include<math.h>
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
	int n;
	int cntNumbers1=0,cntNumbers2=0;
	scanf("%d",&n);
	int numbers1[n];
	int numbers2[n];
	printf("Nhap mang 1");
	for(int i=0;i<n;i++){
		printf("numbers1[%d]=",i);
		scanf("%d",&numbers1[i]);
	}
	printf("Nhap mang 2");
		for(int i=0;i<n;i++){
		printf("numbers2[%d]=",i);
		scanf("%d",&numbers2[i]);
	}
	for(int i=0;i<n;i++){
		printf("So nguyen to mang 1:");
		if(prime(numbers1[i])){
			printf("%d\t",numbers1[i]);
			cntNumbers1++;
		} 
		printf("So nguyen to mang 2:");
		if(prime(numbers2[i])){
			printf("%d\t",numbers2[i]);
			cntNumbers2++;
		} 
	}
	if(cntNumbers1>cntNumbers2){
		printf("Mang 1 co so nguyen to nhieu hon mang 2");
	} else if(cntNumbers1==cntNumbers2){
		printf("Hai mang co so nguyen to la bang nhau");
	}else{
		printf("Mang 2 co so nguyen to nhieu hon mang 1");
	}
	
}
