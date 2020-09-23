#include<stdio.h>
int main(){
	int n,i,S;
	
	printf("nhap n =");
	scanf("%d",&n);
	for(i=1,S=0;i<=n;++i)
	{
		if(n % i == 0)
		{
			printf("%4d",i);
			S = S + i;
			
		}
	}
	printf("tong cac uoc cua %d la: %d\n",n,S);
}
