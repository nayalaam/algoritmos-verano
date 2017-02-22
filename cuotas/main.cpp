#include <iostream>


using namespace std;

int main() {
	int n,c,r;
	cout<<"\ningrese el monto a pagar: ";
	cin>>n;
	cout<<"\nIngrese las cuotas: ";
	cin>>c;
	if(c==3)
		r=21*n/100;
	if(c==6)
		r=29*n/100;
	if(c==9)
		r=49*n/100;
	if(c==12)
		r=53*n/100;
	cout<<"\nEl total a pagar es: "<<n+r;
	return 0;
}
