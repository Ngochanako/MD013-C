#include<stdio.h>



void Print(int a,int b){
	printf("Tong cua %d và %d la: %d.Hieu cua %d va %d la: %d\n",a,b,a+b,a,b,(a>b)?a-b:b-a);
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
	Print(a,c);	
}
