#include <iostream>

using namespace std;
int fact(int n);
int main() {
	int n;
	cout<<"Ingrese un numero positivo: ";
	cin>>n;
	while(n<0)
	{
		cout<<"Ingrese un numero positivo: ";
		cin>>n;
	}
	cout<<"\n Su factorial es: "<<fact(n);
	return 0;
}
int fact(int n)
{
	if(n==0||n==1)
		return 1;
	return n*fact(n-1);
}
