#include <iostream>
#include <math.h>


using namespace std;

struct puntos{
	int x;
	int y;
	int z;
};

int modulo( puntos p);

int main() {
	puntos p;
	puntos p2;
	int m2,m;
	FILE *f=fopen("arch4.bin","rb");
	for(int i=0;i<10 ;i++)
	{
		fread(&p2,sizeof(p),1,f);
		cout<<"\nEl punto "<<i<<" es: "<<p2.x<<" "<<p2.y<<" "<<p2.z;
		if(i==0)
		{
			m=modulo(p2);
			p=p2;
		}
		else
		{
			m2=modulo(p2);
			if(m<m2)
			{
				m=m2;
				p=p2;
			}
		}

	}
	cout<<"\nEl punto a mayor distancia del eje es: "<<p.x<<" "<<p.y<<" "<<p.z<<" y su modulo es: "<<m;
	fclose(f);
	return 0;
}

int modulo( puntos p)
{
	return (  sqrt(  pow(p.x,2) + pow(p.y,2) + pow(p.z,2) )   );
}
