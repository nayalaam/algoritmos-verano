#include <iostream>

using namespace std;

int main() {
	int v[20],ini,fin;
	for(int i=0;i<20;i++)
	{
		cout<<"\nIngrese el numero "<<i<<":";
			cin>>v[i];
	}
	cout<<"\nIngrese la posicion inicial: ";
	cin>>ini;
	while(ini<1||ini>20)
	{
		cout<<"\nIngrese la posicion inicial: ";
		cin>>ini;
	}
	cout<<"\nIngrese la posicion final: ";
	cin>>fin;
		while(fin<ini||fin>20)
	{
		cout<<"\nIngrese la posicion final: ";
		cin>>ini;
	}
	for(int i=ini;i<fin;i++)
	{
		cout<<"\nPosicion "<<i<<": "<<v[i];
	}
	
	return 0;
}
