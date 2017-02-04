#include <iostream>

using namespace std;
int mcd (int fden, int e);

int main() {
	int a,b;
	cout<<"ingrese dos numeros";
	cin>>a>>b;
	int x=mcd(a,b);
	if (x==1)
		cout<<"son coprimos";
	else
		cout<<"el mcd es: "<<x;
	return 0;
}

int mcd (int fden, int e)
    {
        int dividendo, divisor, r, mcd;
        r= fden%e;
        dividendo = fden;
    divisor = e;
        while (r!=0)
        {
            dividendo = divisor;
            divisor = r;
            r = dividendo % divisor;
        }
    mcd = divisor;
    return mcd;
    }
