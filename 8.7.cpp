#include <iostream>
using namespace std;
int condicion(float p1,float p2,float r1,float r2,float asist){
	int mayorp1=0,mayorp2=0;
	if(p1>r1){
		mayorp1=p1;
	}else{
		mayorp1=r1;
	}
	if(p2>r2){
		mayorp2=p2;
	}else{
		mayorp2=r2;
	}
	if(mayorp1>=80&&mayorp2>=80&&asist>=80){
		return 1;
	}
	if(mayorp1>=50&&mayorp2>=50&&asist>=50){
		return 3;
	}
	return 2;
}
int main() {
	int n,p1,r1,p2,r2,asistencia;
	int libres=0,promocionados=0,regulares=0;
	string nombre,apellido;
	cin>>n;
	cout<<"La cantidad de alumnos son: "<<n<<endl;
	cin>>nombre>>apellido;
	cout<<"El nombre y apellido es: "<<nombre<<" "<<apellido<<endl;
	cin>>p1;
	cout<<"Lo que se saco en el p1 es: "<<p1<<endl;
	cin>>r1;
	cout<<"Lo que se saco en el r1 es: "<<r1<<endl;
	cin>>p2;
	cout<<"Lo que se saco en el p2: "<<p2<<endl;
	cin>>r2;
	cout<<"Lo que se saco en el r2 es: "<<r2<<endl;
	cin>>asistencia;
	cout<<"Tiene "<<asistencia<<"% de asistencia"<<endl;
	for(int i=0;i<n;i++) { 
		switch(condicion(p1,r1,p2,r2,asistencia)){
		case 1:
			promocionados++;
			break;
		case 2:
			regulares++;
			break;
		case 3:
			libres++;
			break;
		}
		cout<<"Promocionaron la materia: "<<promocionados<<" personas"<<endl;
		cout<<"Regularizaron la materia: "<<regulares<<" personas"<<endl;
		cout<<"Quedaron libre en la materia: "<<libres<<" personas"<<endl;
	}
	return 0;
}

