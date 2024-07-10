#include <iostream>
#include <vector>
using namespace std;
struct f1{
	string ne;
	string npt1;
	string npt2;
	string npr;
};
string sustip(vector<f1> &equipos,const string &np){
	for (auto&equipo : equipos){
		if(equipo.npt1==np){
			string pr=equipo.npr;
			equipo.npt1=pr;
			return pr;
		} else if(equipo.npt2==np){
			string pr=equipo.npr;
			equipo.npt2=pr;
			return pr;
		}
	}
	return "No encontrado";
}
int main() {
	vector<f1> equipos={
		{"Aston Martin","Alonso","Stroll","Drugovich"},
		{"Williams Racing","Albon","Sargeant","Colapinto"},
		{"Haas","Hulkenberg","Magnussen","Bearman"},
		};
	cout<<"Lista de equipos antes de la sustitucion: "<<endl;
	for(const auto&equipo : equipos){
		cout<<equipo.ne<<": "
			<<equipo.npt1<<", "
			<<equipo.npt2<<", "
			<<equipo.npr<<endl;
	}
	string ps;
	cout<<"Ingrese el nombre del piloto titular a sustituir: ";
	cin>>ps;
	string resultado= sustip(equipos,ps);
	if(resultado=="No encontrado"){
		cout<<"Piloto no encontrado en la lista de equipos"<<endl;
	} else {
		cout<<"Piloto "<<ps<<" ha sido sustituido por "<<resultado<<endl;
	}
	cout<<"Lista de equipos despues de la sustitucion: "<<endl;
	for(const auto &equipo : equipos){
		cout<<equipo.ne<<": "
			<<equipo.npt1<<", "
			<<equipo.npr<<", "
			<<equipo.npt2<<endl;
	}
	return 0;
}

