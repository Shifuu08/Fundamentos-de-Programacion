#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
	int n;
	cout<<"Ingrese el numero de esquinas: ";
	cin>>n;
	vector<vector<int>>infra(n,vector<int>(24));
	for(int i=0;i<n;++i) { 
		cout<<"Ingrese las 24 cantidades de infracciones para la esquina "<<i+1<<": ";
		for(int j=0;j<24;++j) { 
			cin>>infra[i][j];
		}
	}
	int mih=0;
	int hmi=0;
	for(int j=0;j<24;++j) { 
		int si=0;
		for(int i=0;i<n;++i) { 
			si+=infra[i][j];
		}
		if(si>mih){
			mih=si;
			hmi=j;
		}
	}
	cout<<"La hora con mas pasos en rojo es: "<<hmi<<" con "<<mih<<" infracciones"<<endl;
	int mie=0;
	int emi=0;
	for(int i=0;i<n;++i) { 
		int si=0;
		for(int j=0;j<24;++j){ 
			si+=infra[i][j];
		}
		if(si>mie){
			mie=si;
			emi=i;
		}
	}
	cout<<"La esquina con mas pasos en rojo es: "<<emi+1<<" con "<<mie<<" infracciones"<<endl;
	int cs;
	cout<<"Ingrese la cantidad de pasos en rojo para listar las esquinas y horas que se superan esa cantidad: "; 
	cin>>cs;
	cout<<"Esquinas y horas que superan "<<cs<<" infracciones"<<endl;
	bool encontrado= false;
	for(int i=0;i<n;++i) { 
		for(int j=0;j<24;++j) { 
			if(infra[i][j]>cs){
				cout<<"Esquina "<<i+1<<", Hora "<<j<<": "<<infra[i][j]<<" infracciones ";
				encontrado=true;
			}
		}
	}
	if(!encontrado){
		cout<<"No se encontraron esquinas ni horas que superen "<<cs<<" infracciones ";
	}
	return 0;
}

