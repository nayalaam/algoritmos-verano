#include <iostream>


using namespace std;


int main() {
	int a;
	int b,n;
	cout<<"ingresar dos muneros \n";
	cin>>a>>b;
	cout<<"MENU \n Ingrese:\n1 Para sumar\n2 Para restarlos\n3 Para multiplicarlos\n4 Para dividirlos\n";
	cin>>n;
	while(n<=0||n>=5)
	{
			cout<<"INGRESE UN NUMERO DEL 1 AL 4!!!\n";
		cin>>n;
	}
	if(n==1)
		cout<<"La suma de ambos numeros es: \n"<<a+b;
		else
			{
				if(n==2)
				cout<<"La resta de ambos numeros es :"<<a-b;
				else
				{
					if(n==3)
				cout<<"La multiplicacion de ambos numeros es :"<<a*b;
					else
				cout<<"La division de ambos numeros es :"<<a/b;
				}
	
			}
		
	
	return 0;
}
