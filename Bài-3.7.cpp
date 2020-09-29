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
	 for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%5d", arr[i]);
    }
    return 0;
}

