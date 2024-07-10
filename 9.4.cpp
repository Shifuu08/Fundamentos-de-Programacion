#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> aprob,desaprob;
	int nota;
	cout<<"Ingrese la nota: ";
	cin>>nota;
	while(nota!=0){
		cin.ignore();
		string nombre;
		cout<<"Ingrese el nombre: ";
		getline(cin,nombre);
		cout<<"El nombre es: "<<nombre<<endl;
		if(nota>=6){
			aprob.push_back(nombre);
		}else{
			desaprob.push_back(nombre);
		}
		cin>>nota;
	}
	cout<<"Las personas aprobadas son: "<<endl;
	for(string nom : aprob)
		cout<<nom<<endl;
	
	cout<<endl;
	cout<<"Las personas desaprobadas son: "<<endl;
	for(string nom : desaprob)
		cout<<nom<<endl;
	
	return 0;
}

