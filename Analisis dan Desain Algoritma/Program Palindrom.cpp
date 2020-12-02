#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
   char a[50], e[50];
   
   cout<<"Program Menentukan Kata Palindrom "<<endl;
   cout<<"==================================="<<endl;
   cout<<"Masukan kata apapun : ";
   cin>>a;
   cout<<"==================================="<<endl;
   
 
   strcpy(e,a);
   strrev(e);
 
   if(strcmp(a,e)== 0)
   
    	cout<<"'"<<a<<"'"<<" "<<"merupakan kata palindrom";
	else
   		cout<<"'"<<a<<"'"<<" "<<"bukan kata palindrom";
	
   return 0;
}

