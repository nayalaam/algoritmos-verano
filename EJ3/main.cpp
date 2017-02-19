#include <iostream>
#include <math.h>


using namespace std;

struct puntos{
	int x;
	int y;
	int z;
};

void ingrese (puntos p[10]);
int modulo( puntos p);

int main() {
	puntos v[10];
	ingrese(v);
	int m2,m=modulo(v[0]), pos=0;
	for(int i=1;i<10;i++)
	{
		m2=modulo(v[i]);
		if(m<m2)
		{
			m=m2;
			pos=i;
		}
	}
	cout<<"\nEl punto a mayor distancia del eje es: "<<v[pos].x<<" "<<v[pos].y<<" "<<v[pos].z<<" y su modulo es: "<<m;
	
	return 0;
}
void ingrese (puntos p[10])
{
	for(int i=0;i<10;i++)
	{
		cout<<"\n ingrese el punto "<<i<<" : ";
		cin>>p[i].x>>p[i].y>>p[i].z;
	}
}
int modulo( puntos p)
{
	return (  sqrt(  pow(p.x,2) + pow(p.y,2) + pow(p.z,2) )   );
}
