#include <iostream>
#include <string>
using namespace std;

void cambiar(string f);

int main() {
	string f;
	int i=0;
	cout<<"ingrese una frase\n";
	cin>>f;
	cambiar(f);

	return 0;
}

void cambiar(string f)
{
		for(int i=0;f[i]!='\0';i++)
	{
		if(f[i]>='a'&&f[i]<='z')
		{
			f[i]=f[i]-('a'-'A');
		}
		else
		{
			if(f[i]>='A'&&f[i]<='Z')
			{
				f[i]=f[i]+('a'-'A');
			}		
		}
	}
	cout<<f;
}


