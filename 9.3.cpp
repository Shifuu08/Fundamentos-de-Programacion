#include <iostream>
#include <vector>
using namespace std;
int buscapos(const vector<string> &palabras,string palabra){
	int pos=0;
	while(pos<palabras.size() and palabra>palabras[pos]){
		++pos;
	}
	return pos;
}
void insertar(vector<string> &palabras,int posicion, string palabra1){
	palabras.resize(palabras.size()+1);
	for(int i=palabras.size()-1;i>posicion;--i) {  
		palabras[i]=palabras[i-1];
	}
	palabras[posicion]=palabra1;
}
int main() {
	vector<string> palabras(11);
	palabras[1]= "Abanico";
	palabras[2]= "Barco";
	palabras[3]= "Casa";
	palabras[4]= "Dedo";
	palabras[5]= "Elefante" ;
	palabras[6]= "Flor";
	palabras[7]= "Gato";
	palabras[8]= "Hormiga";
	palabras[9]= "Isla";
	palabras[10]= "Jirafa";
	string palabrael;
	cout<<"Ingrese la palabra a insertar: ";
	cin>>palabrael;
	cout<<"Palabra elegida a insertar en el arreglo es: "<<palabrael<<endl;
	cout<<endl;
	cout<<"Vector con las palabras originales: "<<endl;
	for(int i=1;i<=10;i++) {  
		cout<<"Palabra:[Nº "<<i<<"]: "<<palabras[i]<<endl;
	}	
	int pos=buscapos(palabras,palabrael);
	insertar(palabras,pos,palabrael);
	cout<<endl;
	cout<<"Vector con las palabras modificadas: "<<endl;
	for(int i=1;i<=11;i++) {  
		cout<<"Palabra:[Nº "<<i<<"]: "<<palabras[i]<<endl;
	}	
	return 0;
}

