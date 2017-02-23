#include <iostream>

using namespace std;

void bublesort(float n[100]);
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
	bublesort(n);
	for(int i=0;n[i]!=0;i++)
	{
		cout<<"\n "<<n[i];
	}
	
	return 0;
}
void bublesort(float n[100])
{
	float aux;
	for(int i=0;n[i]!=0;i++)
	{
		for(int j=0;n[j]!=0&&n[j+1]!=0;j++)
		{
			if(n[j+1]<n[j])
			{
				aux=n[j+1];
				n[j+1]=n[j];
				n[j]=aux;
			}
		}
	}
	

}
