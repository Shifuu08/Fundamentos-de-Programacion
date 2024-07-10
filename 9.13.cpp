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
	fichal alum[200];
	for(int i=0;i<32;i++) { 
		alum[0].mat[i]=0;
	}
	alum[0].mat[5]=8;
	alum[0].mat[10]=7;
	alum[0].mat[11]=10;
	alum[0].nombre="Enzo";
	alum[0].apellido="Elias";
	alum[0].dni=46449425;
	alum[0].edad=19;
	alum[0].cuil="20.46449425.2";
	alum[0].dire="Mitre 6758";
	alum[0].celu="3425910333";
	alum[0].email="enzovalentinoelias@gmail.com";
	alum[0].carre="Ingenieria en Informatica";
	alum[0].anioi=2024;
	
	cout<<"Su nombre y apellido son: "<<alum[0].nombre<<" "<<alum[0].apellido<<endl;
	cout<<"Su DNI y su CUIL son: "<<alum[0].dni<<" | "<<alum[0].cuil<<endl;
	cout<<"Su edad es: "<<alum[0].edad<<" años"<<endl;
	cout<<"La direccion de su casa es: "<<alum[0].dire<<endl;
	cout<<"Su numero de telefono y email son: "<<alum[0].celu<<" | "<<alum[0].email<<endl;
	cout<<"Su carrera y año de ingreso son: "<<alum[0].carre<<" | "<<alum[0].anioi<<endl;
	cout<<"Calificacion de la materia Nº 6: "<<alum[0].mat[5]<<endl;
	cout<<"Calificacion de la materia Nº 11: "<<alum[0].mat[10]<<endl;
	cout<<"Calificacion de la materia Nº 12: "<<alum[0].mat[11]<<endl;
	
	return 0;
}



