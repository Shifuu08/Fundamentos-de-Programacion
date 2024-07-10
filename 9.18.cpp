#include <iostream>
#include <vector>
using namespace std;
struct paci{
	string nombre;
	string dni;
	string diag;
	int hab;
};
void leep(vector<paci>& pacientes,int n) {
	for(int i=0;i<n;i++) { 
		paci paciente;
		cout<<"Ingrese el nombre del paciente: ";
		cin.ignore();
		getline(cin,paciente.nombre);
		cout<<"Ingrese el DNI del paciente: ";
		cin>>paciente.dni;
		cout<<"Ingrese el diagnostico del paciente: ";
		cin.ignore();
		getline(cin,paciente.diag);
		cout<<"Ingrese el numero de la habitacion del paciente: ";
		cin>>paciente.hab;
		pacientes.push_back(paciente);
	}
}
int ehpn(const vector<paci>& pacientes, const string& nombre){
	for(const auto&paciente :pacientes){
		if(paciente.nombre==nombre){
			return paciente.hab;
		}
	}
	return -1;
}
int cpcd(const vector<paci>& pacientes, const string& diag){
	int cont=0;
	for(const auto&paciente :pacientes){
			if(paciente.diag==diag){
				++cont;
			}
		}
		return cont;
}
paci* epph(vector<paci>& pacientes, int hab){
	for(auto& paciente : pacientes){
		if(paciente.hab==hab){
			return &paciente;
		}
	}
	return nullptr;
}
int main() {
	vector<paci> pacien;
	int n;
	cout<<"Ingrese el numero de pacientes: ";
	cin>>n;
	leep(pacien,n);
	int habc=ehpn(pacien,"Cosme Fulanito");
	if (habc!=-1){
		cout<<"Cosme Fulanito se encuentra en la habitacion: "<<habc<<endl;
	}else{
		cout<<"Cosme Fulanito no se encuentra internado"<<endl;
	}
	int ca= cpcd(pacien,"Apendicitis");
	cout<<"Cantidad de pacientes internados con apendicitis: "<<ca<<endl;
	paci* ph101= epph(pacien,101);
	if(ph101){
		cout<<"Datos del paciente internado en la habitacion 101"<<endl;
		cout<<"Nombre: "<<ph101->nombre<<endl;
		cout<<"DNI: "<<ph101->dni<<endl;
		cout<<"Diagnostico: "<<ph101->diag<<endl;
		cout<<"Habitacion: "<<ph101->hab<<endl;
   } else {
		cout<<"No hay paciente internado en la habitacion 101"<<endl;
	}
	return 0;
}

