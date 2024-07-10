#include <iostream>
using namespace std;
void interc(int &a,int &b){
	int aux=a;
	a=b;
	b=aux;
}
void inter(float &n,float &n1){
	float aux=n;
	n=n1;
	n1=aux;
}
void inte(char &c,char &d){
		char aux=c;
		c=d;
		d=aux;
	}

int main() {
	int a,b;
	float n,n1;
	char c,d;
	cout<<"Ingrese los valores: "<<endl;
	cin>>a>>b;
	cout<<"El valores originales son: "<<a<<" / "<<b<<endl;
	interc(a,b);
	cout<<"Los valores intercambiados son: "<<a<<" / "<<b<<endl;
	cout<<"Ingrese los valores reales: "<<endl;
	cin>>n>>n1;
	cout<<"El valores originales son: "<<n<<" / "<<n1<<endl;
	inter(n,n1);
	cout<<"Los valores intercambiados son: "<<n<<" / "<<n1<<endl;
	cout<<"Ingrese los valores de tipo caracter: "<<endl;
	cin>>c>>d;
	cout<<"Los caracteres originales son: "<<c<<" / "<<d<<endl;
	inte(c,d);
	cout<<"Los caracteres intercambiados son: "<<c<<" / "<<d<<endl;
	return 0;
}

