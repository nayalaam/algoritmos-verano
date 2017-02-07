#include <iostream>
#include <stdlib.h>


using namespace std;
int main() {
	int v[15];
	float pdesa,papro,prom,c=0.7, sumad=0, sumaa=0,ca=0,cd=0;
	cout<<c;
	for(int i=0;i<15;i++)
	{
				cou<<"\ningrese una nota: ";

		cin>>v[i];
		while(v[i]<0||v[i]>10)
		{
			cou<<"\ningrese una nota: ";
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
		cout<<"\n el promedio de los desaprobados es"<<papro;
		cout<<"\n el promedio total es: "<<prom;

	return 0;
}
