#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri:");
		scanf("%d",&arr[i]);
	}
	printf("Mang sau khi nhap vao:\n");
	for(int i=0; i<n; i++){
	    printf("%5d",arr[i]);
	} 
    int i;
    int min; 
    
    for(i=0; i<n; i++) {
        if(arr[i]>0) {
        min = arr[i];
        break;
	}
	}
    for(i=0; i<n; i++) {
        if(arr[i]>0 && arr[i]<min)
        min = arr[i];
    }
        printf("\nSo duong be nhat la:%d",min);
}
