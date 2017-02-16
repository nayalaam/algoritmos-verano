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
 void    ingresar (c []);

int main(){

    c reg[100], aux;
    ingresar (reg);
   FILE *f =fopen("Datos.bin","w+b");
   int i=0;
   for(  int i=0; reg[i].cmpClv!=0; i++)
   {
           fwrite(&reg[i],sizeof(c),1,f);          
   }   
   fclose(f);
 
    return 0;
}
void    ingresar (c r[100])
 {
     int auxCmp, i=0;
	cout<<"ingrese primer registro, 0 para terminar:"<<endl;    
	cin>>r[i].cmpClv;
	 
     while(i<100&&r[i].cmpClv!=0)
     {
     
	cin>>r[i].cmp1;
     cin>>r[i].cmp2;
     cin >>r[i].cmp3;
     cout<<"ingrese siguiente registro, 0 para terminar:"<<endl;
     cin>>r[++i].cmpClv;
     }
 
 }

