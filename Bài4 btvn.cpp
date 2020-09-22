#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, p, s=0;

	    do{ 
		   	printf("-Nhap canh thu nhat: \n");
			 
	        scanf("%f", &a);
	        printf("\n---------\n");
	        printf("\n-Nhap canh thu hai: \n");
			 
	        scanf("%f", &b);
			printf("\n---------\n");			
	        printf("\n-Nhap canh thu ba: \n");
	
	        scanf("%f", &c);
	        printf("\n---------\n");
	        
	        if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {
	
	                printf("\nDay la ba canh cua tam giac\n");
	
	                p = (a+b+c)/2;
	                s = sqrt(p*(p-a)*(p-b)*(p-c));    
	        }else{
					printf("\nDay khong phai la ba canh cua tam giac!\n");  

				}      					       
		}while( a<=0 || b<=0 || c<=0 );     			               
	            if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
	            printf("\ndien tich cua tam giac la %f", s);  
	            printf("\nchu vi cua tam giac la %f", p);   
	        }

}
