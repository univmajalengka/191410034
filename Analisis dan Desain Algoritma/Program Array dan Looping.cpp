#include <iostream>
using namespace std;

int main()
{		
	int value[7]={1,2,2,5,4,4,1};
	int y = 1;
	int batas = 7;
	int bil_big = 500000*2;
	
	for (int x=0; x<batas; x++)	{
		y = value[x] * bil_big;
			cout<<y;
			cout<<endl;
		bil_big = bil_big/10;	
		}
return 0;
}
