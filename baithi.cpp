#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, p, s=0;
	do{ 
		printf("a= ");
	    scanf("%lf", &a);
	    printf("\nb= ");
	    scanf("%lf", &b);			
	    printf("\nc= ");
	    scanf("%lf", &c);
	    if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {
	        printf("\nDay la ba canh tam giac\n");
	            p = (a+b+c)/2;
	            s = sqrt(p*(p-a)*(p-b)*(p-c));    
	    }else{
					printf("Day khong phai la ba canh tam giac\n");  
				}      					       
		}while( a<=0 || b<=0 || c<=0);     			               
	            if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
	            printf("\ndien tich tam giac la %lf", s);  
	            printf("\nchu vi tam giac la %lf", s);   
	        }
}
