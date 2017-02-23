#include <iostream>

using namespace std;

int main() {
	int ts;
	cout<<"\nIngrese el tiempo en segundos: ";
	cin>>ts;
	int tm=ts/60;
	int th=tm/60;
	tm=tm%60;
	ts=ts%60;
	cout<<"\nHoras: "<<th<<"\nMinutos: "<<tm<<"\nSegundos:"<<ts;
	return 0;
}
