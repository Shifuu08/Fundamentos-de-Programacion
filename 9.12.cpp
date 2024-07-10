#include <iostream>
using namespace std;
struct fichal {
	int dni;
	string nombre;
	string apellido;
	int edad;
	string cuil;
	string carre;
	int anioi;
	string email;
	string dire;
	string celu;
	int mat[32];
};
int main() {
	fichal alum;
	for(int i=0;i<32;i++) { 
		alum.mat[i]=0;
	}
	alum.mat[5]=8;
	alum.mat[10]=7;
	alum.mat[11]=10;
	alum.nombre="Enzo";
	alum.apellido="Elias";
	alum.dni=46449425;
	alum.edad=19;
	alum.cuil="20.46449425.2";
	alum.dire="Mitre 6758";
	alum.celu="3425910333";
	alum.email="enzovalentinoelias@gmail.com";
	alum.carre="Ingenieria en Informatica";
	alum.anioi=2024;
	
	cout<<"Su nombre y apellido son: "<<alum.nombre<<" "<<alum.apellido<<endl;
	cout<<"Su DNI y su CUIL son: "<<alum.dni<<" | "<<alum.cuil<<endl;
	cout<<"Su edad es: "<<alum.edad<<" años"<<endl;
	cout<<"La direccion de su casa es: "<<alum.dire<<endl;
	cout<<"Su numero de telefono y email son: "<<alum.celu<<" | "<<alum.email<<endl;
	cout<<"Su carrera y año de ingreso son: "<<alum.carre<<" | "<<alum.anioi<<endl;
	cout<<"Calificacion de la materia Nº 6: "<<alum.mat[5]<<endl;
	cout<<"Calificacion de la materia Nº 11: "<<alum.mat[10]<<endl;
	cout<<"Calificacion de la materia Nº 12: "<<alum.mat[11]<<endl;
	
	return 0;
}


