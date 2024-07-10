#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> notas(31,0);
int suma=0;
for(int i=1;i<notas.size();i++) {  
	notas[i]=rand()%10+1;
	cout<<i<<" : "<<notas[i]<<endl;
	suma += notas[i];
}
float prom=suma/notas.size();
cout<<"----------------------"<<endl;
cout<<"El promedio es: "<<prom<<endl;
cout<<endl<<"Notas por encima del promedio: "<<endl;
for(int i=1;i<notas.size();i++) {  
	if(notas[i]>prom);
	cout<<i<<" : "<<notas[i]<<endl;
}
	return 0;
}

