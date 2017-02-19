
//se tienen 2 vectores uno con nombres y otro con sus edades, se pide
//ingresar ambos en un registro y meterlos ordenadamente en forma ascendente por edad
//en una estructura enlazada y luego escribirlo en un archivo

#include <iostream>

using namespace std;

struct info{ 
	char nombre[25];
	int edad;
};
struct nodo{
	info reg;
	nodo *sgte;
};

void ingrese(info x[25], int f);
void insertar_ordenado(nodo *&lista,info x);

int main() {
	info x[25];
	int fin;
	nodo *lista=NULL;
	cout<<"\n Ingrese la cantidad de numeros de cada arreglo, tiene q ser menor a 25 ";
	cin>>fin;
	if(fin >=25)
	{
		cout<<"\n Ingrese la cantidad de numeros de cada arreglo, tiene q ser menor a 25";
		cin>>fin;
	}
	cout<<"\n ingrese los nombres: ";
	ingrese(x,fin);

	for(int i=0;i<fin;i++)
	{	
		insertar_ordenado(lista,x[i]);
	}

	FILE *f=fopen("arch.dat","wb");
	nodo * aux=lista;
	while(aux!=NULL)
		{
			fwrite(&aux->reg,sizeof(aux->reg),1,f);
			aux=aux->sgte;
		}
	fclose(f);	
	return 0;
}
void ingrese(info x[25], int f)
{
	for(int i=0;i<f;i++)
	{
		cout<<"\n Ingrese nombre "<<i+1<<": ";
		cin>>x[i].nombre;
		cout<<"\n Ingrese su edad: ";
		cin>>x[i].edad;
	}
}

void insertar_ordenado(nodo *&lista,info x)
{
	nodo *p=new nodo();
	if(lista==NULL||x.edad< lista->reg.edad)
	{
		p->reg=x;
		p->sgte=lista;
		lista=p;
		return;	
	}
	else
	{
		nodo *q=new nodo();
		q->reg=x;
		p=lista;
		while(p->sgte!=NULL && x.edad<p->reg.edad)
		{
			p=p->sgte;
		}
		q->sgte=p->sgte;
		p->sgte=q;				
	}			
}


