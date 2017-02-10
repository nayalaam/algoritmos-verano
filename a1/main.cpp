#include <iostream>

using namespace std;

int main() {
	int i=0,v[10][10];
	cout<<"ingrese las horas trabajadas y el valor de cada hora para los 10 trabajadores";
	for(i;i<10;i++)
	{
		cout<<"\ningrese trabajador "<<i<<": ";
		for(int j=0;j<2;j++)
		{
			if(j==0)
				cout<<"ingrese horas: ";
			else
				cout<<"ingrese PRECIO DE HORA: ";
			cin>>v[i][j];
		}
	}

	for(i=0;i<10;i++)
	{
		cout<<"\n el empleado "<<i<<"cobra: "<<v[i][0]*v[i][1];
	}
	
	return 0;
}
