#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int multi(int a, int b);
int main() {
	int a,b;
	cin>>a>>b;
	cout<<multi(a,b);
	
	return 0;
}
int multi(int a, int b)
{
	if(a==0||b==0)
		return 0;
	if (a<0&&b<0)
		return ( multi(    sqrt(pow(a,2) )    ,    sqrt(pow(b,2))  ));
	if(a<0||b<0)
		return ( multi(    sqrt(pow(a,2) )    ,    sqrt(pow(b,2))  )    - multi(  multi(    sqrt(pow(a,2) )    ,    sqrt(pow(b,2))  )    ,2) );
	return(a+multi(a,b-1));
}
