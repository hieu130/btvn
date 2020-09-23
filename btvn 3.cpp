#include <stdio.h>
int main(){
	int i,t,a;t=0;
	for(i=1;i<=200;i++)
	{
	a=i%2;
	if(a!=0)
	t=t+i;}
	printf("Tong so 100 so le > 0 dau tien la: %d ",t);
}


