#include <stdio.h>
int main(){
	int n,x,tmp;
	printf("Nhap n:");
	scanf("%d",n);
	printf("Nhap x:");
	scanf("%d",x);
	int arr[100];
	for(int i=0;i<0;i++){
		printf("Nhap phan tu arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int min=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
		tmp = x-arr[i];
		if(tmp<min){
			min=tmp;
		}
		}
	}
		for(int i=0;i<n;i++){
		    if(arr[i]+min==x){
			printf("So trong mang be hon va gan x nhat la: %d",arr[i]);
        }
	}
}
