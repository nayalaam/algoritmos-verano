#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct c{
        int cmpClv;
        int cmp1;
        float cmp2;
        char cmp3[20];
        };
 
 int main (){
 	
   FILE *f =fopen("Datos.bin","rb");
 	c aux;
	 cout<<"cmpClv"<<' '<<"    cmp1"<<' '<<"     cmp2"<<' '<<"             cmp3"<<' '<<endl;
 	while (fread(&aux, sizeof (aux), 1, f))
 	
	cout<<aux.cmpClv<<"          "<<aux.cmp1<<"           "<<aux.cmp2<<"             "<<aux.cmp3<<"            "<<endl;
	
	
	fclose(f);
 }
