#include <iostream>

using namespace std;

int main() {
	
	long n,v[10000];
	cout<<"ingrese n para mostrar su secuencia de fibonachi";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i==0)
			v[0]=0;
		else
		{
			if(i==1)
				v[1]=1;
			else
				v[i]=v[i-1]+v[i-2];
		}
		
	}
	for(int i=0;i<=n;i++)
	{
		cout<<" "<<v[i];
		
	}
	
	
	return 0;
}
