#include <stdio.h>
int main() 
{
    int n,i;
    float S = 0;
        printf(" Nhap n= ");
        scanf("%d",&n);

    for(i = 1;i <= n;i+=2)
    {
        S +=1/(float)i;
    }
    printf("\nS = %f", S);
    
}
