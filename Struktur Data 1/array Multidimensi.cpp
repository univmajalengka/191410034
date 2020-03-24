#include <iostream>
using namespace std;
int main ()
{
	int b[4][4][2] = 	{ {1,2,3,4}, {5,6,7,8}, {9,10} };
	int c[4][4][2] = 	{ {4,3,2,1}, {8,7,6,5}, {10,9} };
	int d[4][4][2];
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
			for(int z=0;z<2;z++)
			{
			d[x][y][z]=b[x][y][z]+c[x][y][z];
		}
	}

	for(int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
			for(int z=0;z<2;z++)
			{
			cout << d[x][y][z]<< " ";
		}
		cout<<endl;
	}
}

