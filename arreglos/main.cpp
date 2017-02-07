#include <iostream>

using namespace std;

int main() {
	int v[5],i=0,suma=0;
	cout<<"ingrese 5 numeros positivos: \n";
	for(i=0;i<5;i++)
	{
		cin>>v[i];	
		while (v[i]<0)
		{
			cout<<"\nINGRESE UN NUMERO POSITIVO";
			cin>>v[i];	
		}	
	}
		for(i=0;i<5;i++)
	{
		suma=suma+v[i];	
	}
	cout<<"la suma de todos los numeros es: "<<suma;
	
	return 0;
}
