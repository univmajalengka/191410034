#include <iostream>
using namespace std;

int  koja(int j, int m,int d) {
	int konver;
	konver=(j*3600)+(m*60)+d;
	return konver;
}
int main() 
{
	int jm1,mn1,dt1;
	
	cout<<"masukan jam 1 : ";
	cin>>jm1;
	cout<<"masukan menit 1 :";
	cin>>mn1;
	cout<<"masukan detik 1 : ";
	cin>>dt1;
	
	
	int jm2,mn2,dt2;
	cout<<"masukan jam 2 : ";
	cin>>jm2;
	cout<<"masukan menit 2 : ";
	cin>>jm2;
	cout<<"masukan detik 2 : ";
	cin>>jm2;
	
	cout<<"jumlah detik 1 : "<<koja(jm1,mn1,dt1)<<endl;
	cout<<"jumlah detik 2 : "<<koja(jm2,mn2,dt2)<<endl;
	
	int hasil;
	hasil=koja(jm2,mn2,dt2) - koja(jm1,mn1,dt1);
	
	cout<<"selisihnya adalah : "<<hasil;
	
	return 0;
}
