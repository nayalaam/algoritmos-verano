#include <iostream>


using namespace std;

void ingresar( int v[100]);
void menu();


int main() {
	int v[100];
	cout<<"ingrese un numero 0 para terminar:\n";
	ingresar(v);
	menu();
	int x;
	cin>>x;
	if(x==5)
	return 0;
	if(x==1)
	{	
		float d=0;
		int suma=0,i;
		for(i=0;i<100   &&	v[i]!=0 ; i++)
		{
			suma=suma+	v[i];
		}
		d=suma/i;
		cout<<"el promedio es:"<<d;
	}
	else
	{
		if (x==2)
		{
			int may;
			for(int i=0;i<100   &&	v[i]!=0 ; i++)
			{
				if(i==0||v[i]>may)
					may=v[i];
			}
				cout<<"el mayor es:"<<may;
			
		}
		else
		{
			if (x==3)
			{
				int m;
				for(int i=0;i<100   &&	v[i]!=0 ; i++)
				{
					if(i==0||v[i]<m)
						m=v[i];
				}
				cout<<"el menor es:"<<m;
			
			}
			else
			{
				for(int i=0;i<100   &&	v[i]!=0 ; i++)
				{
					cout<<v[i];
				}

			}
		}
	}
	
	return 0;
}


void ingresar( int v[100])
{
	int n;
	cin>>n;
	v[0]=n;
	for(int i=0;i<100   &&	n!=0 ; i++)
	{
		v[i]=n;
		cin>>n;
	}

}
void menu()
{
	cout<<"MENU\n1-Calcula el promedio de los numeros ingresados\n2-Determina el mayor\n3-Determina el menor\n4-Muestra en pantalla todos los numeros ingresados\n5-Terminar programa\n";
}
