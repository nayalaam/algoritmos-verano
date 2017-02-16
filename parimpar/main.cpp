#include <iostream>

using namespace std;
int fact(int a);
int main() {
	int a[10000],aux,sumaimp=0,cantimp=0,sfac=0;
	cout<<"\nIngrese un numero, 0 para terminar:";
	cin>>aux;
	for(int i=0;aux!=0&&i<10000;i++)
	{
		a[i]=aux;
	cout<<"\nIngrese un numero, 0 para terminar:";
	
	cin>>aux;

	}
	for(int i=0;a[i]!=0&&i<10000;i++)
	{
		if(a[i]%2==0)
		{
			sfac+=fact(a[i]);
		}
		else
		{
			cantimp++;
			sumaimp+=a[i];
		}
	}
	
	cout<<"la suma del factorial de los numeros pares es: "<<sfac;
	cout<<"el promedio de los numeros impares ingresados es: "<<(float)sumaimp/cantimp;
	
	
	return 0;
}
int fact(int a)
{
	if(a==0||a==1)
	return 1;
	return a*fact(a-1);
}
