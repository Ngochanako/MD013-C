#include<stdio.h>

void Print(int a,int b){
	printf("\n%d*%d=%d",a,b,a*b);
	if(a%b!=0){
		printf("\n%d khong chia het cho %d",a,b);
	}else {
		printf("\n%d/%d=%d",a,b,a/b);
	}
}


int main(){
	//khai bao va nhap 3 so a b c
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	Print(a,b);
	Print(b,c);
	Print(c,a);
	return 0;	
}
