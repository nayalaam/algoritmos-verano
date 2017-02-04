#include <iostream>

using namespace std;
void mostrar (int m[3][3]);
void mt (int m[3][3]);

int main() {
	int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"la matriz ingresada es:    \n";
	mostrar(m);
	mt(m);
	
	return 0;
}
void mostrar (int m[3][3])
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<m[i][j];
		}
		cout<<"\n";
	}
}
void mt (int m[3][3])
{
	int aux;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<=j)
			{
				aux=m[j][i];
				m[j][i]=m[i][j];
				m[i][j]=aux;
			}
		}
	}
	cout<<"la matriz transpuesta es: \n";
	mostrar(m);
}
