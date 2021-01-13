#include <iostream>

using namespace std;

int main()
{
	int value[100];
	int a, i;
	
	cout<<"masukan bilangan/angka : ";
	cin>>a;
	
	for (i=1; i<=a; i++){
		value[i]= i;
		if (i % 3 == 0){
		cout<<"Upin";
		}
		if (i % 5 == 0){
		cout<<"ipin";
	}
		cout<< i <<endl;
	}	
	
return 0;
}

