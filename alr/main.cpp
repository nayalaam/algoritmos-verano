#include <iostream>
#include <string>
using namespace std;
int main() {
	string f;
	char aux;
	int i=0,x;
	cout<<"ingrese una frase\n";
	cin>>f;
	for(x=0;f[x]!='\0';x++);
	x--;
	for(i;i<=x/2;i++)
	{
		aux=f[i];
		f[i]=f[x-i];
		f[x-i]=aux;		
	}
	cout<<f;	
	return 0;
}
