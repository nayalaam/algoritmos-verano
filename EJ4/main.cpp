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
	FILE *f=fopen("arch4.bin","wb");

	for(int i=1;i<10;i++)
	{
		fwrite(&v[i],sizeof(puntos),1,f);
	}
	cout<<"\nTermine de escribir ";
	fclose(f);
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

