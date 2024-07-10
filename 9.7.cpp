#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

int main() {
	int inscrip;
	cout<<"Ingrese la cant. de inscriptos: ";
	cin>>inscrip;
	vector<int>dni(inscrip);
	matrix<int>notas(inscrip,3);
	int g=0, sc=0, ca, np,ng=0, nsc=0,nc=0;
	cout<<"Ingresar los datos de los participantes: "<<endl;
	for (int i=0;i<inscrip;i++) {
		cout<<"Ingrese el codigo del alumno: "<<endl;
		cin>>ca;
		cout<<"Ingrese el DNI del alumno: "<<endl;
		cin>>dni[ca-1];
	}
	cout<<"Ingresar las notas correspondientes: "<<endl;
	while(ca!=-1){
			cout<<"Ingrese el numero del participante: "<<endl;
			cin>>ca;
			ca=ca-1;
			if(ca>-1){
			cout<<"Ingrese el numero de la prueba: "<<endl;
			cin>>np;
			while (np<0 or np>3) {
				cout<<"Error: Prueba no valida, por favor ingreselo otra vez: "<<endl;
				cin>>np;
			}
			np=np-1;
			cout<<"Ingrese la calificacion del alumno: "<<endl;
			cin>>notas[ca][np];
			if(notas[ca][np]>ng) {
				sc=g;
				nsc=ng;
				g=dni[ca];
			    ng=notas[ca][0]+notas[ca][1]+notas[ca][2];
			}else if(notas[ca][np]>nsc){
				sc=notas[ca][np];
				nsc=notas[ca][np];
				sc=dni[ca];
				nsc=notas[ca][0]+notas[ca][1]+notas[ca][2];
			}
			if(notas[ca][2]>nc){
				nc=notas[ca][2];
			}
			}
	}
	cout<<"El ganador es: "<<g<<endl;
	cout<<"El segundo fue: "<<sc<<endl;
	cout<<"El ganador obtuvo el sig.puntaje: "<<ng<<endl;
	cout<<"El segundo obtuvo el sig.puntaje: "<<nsc<<endl;
	cout<<"El ganador de computacion: "<<nc<<endl;
	return 0;
}

