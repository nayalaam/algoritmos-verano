#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct info{ 
	char nombre[25];
	int edad;
};
int main() {
	info reg;
	FILE *f=fopen("arch.dat","rb");
	while(fread(&reg,sizeof(reg),1,f))
	{
		cout<<" "<<reg.nombre<<" "<<reg.edad;
	}
	fclose(f);
	return 0;
}
