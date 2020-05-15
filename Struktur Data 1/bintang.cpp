#include <iostream>
using namespace std;
int main()
{	
	for(int k=1;  k<=5;  k++)
	{
		for(int l=5;  l>k;  l--)
		{
		cout<<" ";
		}
		for(int m=1;  m<=k;  m++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
