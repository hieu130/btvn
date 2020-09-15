#include <iostream>
using namespace std;
 
int main ()
{
   int thu;
    cout<<"Nhap thu vao: " << endl;
     cin>>thu;

		   switch(thu)
   {
   case 2 :
   	{
      cout << "Day la thu 2" << endl; 
      break;
  }
   case 3 :
   	{
   	  cout << "Day la thu 3" << endl;
   	  break;
   }
   case 4 :
   	{
      cout << "Day la thu 4" << endl;
      break;
  }
   case 5 :
   	{
      cout << "Day la thu 5" << endl;
      break;
  }
   case 6 :
   	{
      cout << "Day la thu 6" << endl;
      break;
  }
   case 7 :
   	{
      cout << "Day la thu 7" << endl;
      break;
  }
   case 8 :
   	{
      cout << "Day la chu nhat" << endl;
      break;
  }
   default :
      cout << "Khong phai ngay nao trong tuan" << endl;
   }
	return 0;
}
