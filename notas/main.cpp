#include <iostream>
#include <stdlib.h>


using namespace std;
int main() {
	int v[15];
	float pdesa,papro,prom, sumad=0, sumaa=0,ca=0,cd=0;
	for(int i=0;i<15;i++)
	{
		cout<<"\ningrese una nota: ";

		cin>>v[i];
		while(v[i]<0||v[i]>10)
		{
			cout<<"\ningrese una nota: ";
			cin>>v[i];
		}
		if(v[i]>=4)
		{
			sumaa=sumaa+v[i];
			ca++;
		}
		else
		{
			sumad=sumad+v[i];
			cd++;
		}	
	}
	pdesa=sumaa/ca;
	papro=sumad/cd;
	prom=(sumaa+sumad)/15;

	cout<<"\n el promedio de los aprobados es :"<<pdesa;
	cout<<"\n el promedio de los desaprobados es: "<<papro;
	cout<<"\n el promedio total es: "<<prom;
	cout<<"\n la cantidad de aprobados es: "<<ca<<"\n La cantidad de desaprobados es: "<<cd;
	

	return 0;
}
