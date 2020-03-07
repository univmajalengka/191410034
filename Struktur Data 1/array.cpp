#include <iostream>
using namespace std;
int value[50];
int x;

int main()
{	
	cout<<"masukan jumlah data yang mau diinput : ";
	cin>>x;
		
	for (int i=0; i<x; i++)
	{	
	cout<<"inputan data ke "<< i+1 <<" : ";
	cin >> value[i];
	}
	cout<<endl;
	cout<<"data yang telah di input : ";
	
	for (int i=0; i<x; i++)
	{
		cout<<value[i]<<" ";
	}
			
	return 0;
}

