#include<stdio.h>
//kiem tra mang doi xung
int checkArray(int a[],int n){
	int i=0;
	int j=n-1;
	while(i<=j){
		if(a[i]!=a[j]) return 0;
		i++;
		j--;
	}
	return 1;
}


int main(){
	int n;
	int arr1[n];
	int arr2[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr1[%d]=",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++){
		printf("arr2[%d]=",i);
		scanf("%d",&arr2[i]);
	}
	if(checkArray(arr1,n)){
		printf("Mang 1 la mang doi xung");
	} else{
		printf("Mang 1 khong la mang doi xung");
	}
	if(checkArray(arr2,n)){
		printf("\nMang 2 la mang doi xung");
	} else{
		printf("\nMang 2 khong la mang doi xung");
	}
}
