#include <iostream>

using namespace std;
int main( ) {
	float n[100],aux;
	int ordenado=1,j;
	cout<<"\nIngrese un numero, cero para terminar :";
	cin>>aux;
	for(j=0;j<100&&aux!=0;j++)
	{
		n[j]=aux;
		cout<<"\nIngrese un numero, cero para terminar :";
		cin>>aux;
	}
	n[j]=0;
	//el arreglo termina en cero
	for(int i=0;n[i]!=0&&n[i+1];i++)
	{
		if(n[i+1]<n[i])	
			ordenado=0;
	}
	
	if(ordenado)
		cout<<"\nLos numeros estan ordenados";
	else
			cout<<"\nLos numeros no estan ordenados";

	
	return 0;
}
