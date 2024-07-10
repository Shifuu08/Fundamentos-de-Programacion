#include <iostream>
#include <vector>
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
};
int edad(const fecha& fnac,const fecha& fhoy){
	int edad=fhoy.anio-fnac.anio;
	if(fhoy.mes<fnac.mes||(fhoy.mes==fnac.mes && fhoy.dia < fnac.dia)){
		edad--;
	}
	return edad;
}
struct socio{
	string apellido;
	string nombre;
	int dni;
	string cat;
	fecha fenac;
	};
void actu(vector<socio>& socios, const fecha& fhoy){
	for(auto& socio : socios){
		int eda=edad(socio.fenac,fhoy);
		if(eda<=12){
			socio.cat="Infantil";
		}else if(eda<=18){
			socio.cat="Juvenil";
		}else {
			socio.cat="Mayor";
			}
		}
	}
int cr(const vector<socio>& socios,int ci,int cj,int cm){
	int total=0;
	for(const auto&socio : socios){
		if(socio.cat=="Infantil"){
			total+=ci;
		}else if(socio.cat=="Juvenil"){
			total+=cj;
		}else{
			total+=cm;
		}
	}
	return total;
}
int main() {
	int cui,cuj,cum;
	cout<<"Ingrese la cuota para infantiles: ";
	cin>>cui;
	cout<<"Ingrese la cuota para juveniles: ";
	cin>>cuj;
	cout<<"Ingrese la cuota para mayores: ";
	cin>>cum;
	int n;
	cout<<"Ingrese la cantidad de socios: ";
	cin>>n;
	vector<socio> socios(n);
	for(int i=0;i<n;++i) { 
		cout<<"Ingrese los datos del socio "<<i+1<<": ";
		cout<<"Apellido: ";
		cin>>socios[i].apellido;
		cout<<"Nombre: ";
	    cin>>socios[i].nombre;
		cout<<"DNI: ";
		cin>>socios[i].dni;
		cout<<"Fecha de nacimiento (Dia,Mes,Año): ";
		cin>>socios[i].fenac.dia>>socios[i].fenac.mes>>socios[i].fenac.anio;
		int eda=edad(socios[i].fenac,{7,7,2024});
		if(eda<=12){
			socios[i].cat="Infantil";
		}else if(eda<=18){
			socios[i].cat="Juvenil";
		}else {
			socios[i].cat="Mayor";
		}
	}
	fecha hoy={7,7,2024};
	actu(socios,hoy);
	int recau=cr(socios,cui,cuj,cum);
	cout<<"La recaudacion mensual del club es: "<<recau<<endl;
	return 0;
}

