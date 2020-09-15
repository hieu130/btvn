#include <iostream>
using namespace std;
 
int main ()
{
   int a, b; 
printf("a = "); 
scanf("%d", &a);
 
printf("b = "); 
scanf("%d", &b); 

    if(a>=b) {
    printf("Thuong 2 so la %f", (float)a/b);      
}else{
    if(a<=b) 
    printf("Tich 2 so la %d", a*b);
}
   	return 0;
}
   


