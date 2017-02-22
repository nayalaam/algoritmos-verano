#include <iostream>

using namespace std;
int fact(int n);
int main() {
	int n;
	cout<<"Ingrese un numero positivo de 5 digitos: ";
	cin>>n;
	while(n<0||(n<10000||n>99999))
	{
		cout<<"Ingrese un numero positivo de 5 digitos: ";
		cin>>n;
	}
	n=(n/100)%10;
	cout<<"\nEl numero del medio es:"<<n<<"\n Su factorial es: "<<fact(n);
	return 0;
}
int fact(int n)
{
	if(n==0||n==1)
		return 1;
	return n*fact(n-1);
}
