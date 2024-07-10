#include <iostream>
#include <cmath>
using namespace std;
struct rr{
	double r1;
	double r2;
};
struct rc{
	double pr;
	double pi;
};
bool srr(double a, double b, double c){
	double discri=b*b-4*a*c;
	return discri >=0;
}
rr crr(double a, double b, double c){	
	double discri=b*b-4*a*c;
	rr raices;
	raices.r1=(-b+sqrt(discri))/(2*a);
	raices.r2=(-b+sqrt(discri))/(2*a);
	return raices;
}
rc crc (double a, double b, double c){	
	double discri=b*b-4*a*c;
	rc raices;
	raices.pr=-b/(2*a);
	raices.pi=sqrt(-discri)/(2*a);
	return raices;
}
int main() {
	double a,b,c;
	cout<<"Ingresar los coeficientes a,b y c de la funcion cuadratica: "<<endl;
	cin>>a>>b>>c;
	if(a==0){
		cout<<"El coeficiente no puede ser cero en dicha funcion"<<endl;
	    return 1;
	}
	if(srr(a,b,c)){
		rr raices=crr(a,b,c);
		cout<<"Las raices son reales: "<<endl;
		cout<<"Raiz 1: "<<raices.r1<<endl;
		cout<<"Raiz 2: "<<raices.r2<<endl;
	}else {
		rc raices=crc(a,b,c);
		cout<<"Las raices son complejas conjugadas: "<<endl;
		cout<<"Parte real: "<<raices.pr<<endl;
		cout<<"Parte imaginaria: "<<raices.pi<<endl;
	}
	return 0;
}

