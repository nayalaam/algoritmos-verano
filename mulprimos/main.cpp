#include <iostream>

using namespace std;
int esprimo(int x);
int main() {
	for(int i=2;i<10000;i++)
	{
		if(esprimo(i))
		{
			cout<<"\nlos multiplos de "<<i;
			for(int j=0;j<20;j++)
			{
				cout<<" "<<i*j;
			}
		}
	}
	
	return 0;
}
int esprimo(int x)
{
	for(int i=2;x<i;i++)
	{
		if(x/i==0)
			return 0;
	}
}
