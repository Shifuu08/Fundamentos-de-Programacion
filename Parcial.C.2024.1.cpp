#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct prem {
	int cod;
	string desc;
	int vcre;
};
struct tar {
	int num;
	string nc;
	double saldo;
	int cre;
};
int cp(vector<tar>& tars, vector<prem>& prems, int ntar, int cd) {
	int indextar = -1;
	for (int i = 0; i < tars.size(); i++) {
		if (tars[i].num == ntar) {
			indextar = i;
			break;
		}
	}
	if (indextar == -1) return 1;
	int indexprem = -1;
	for (int i = 0; i < prems.size(); i++) {
		if (prems[i].cod == cd) {
			indexprem = i;
			break;
		}
	}
	if (indexprem == -1) return 2;
	if (tars[indextar].cre < prems[indexprem].vcre) {
		return 3;
	}
	tars[indextar].cre -= prems[indexprem].vcre;
	prems.erase(prems.begin() + indexprem);
	return 0;
}
int main() {
	int n, m;
	cout << "Ingrese la cantidad de premios: ";
	cin >> n;
	cout << "Ingrese la cantidad de tarjetas: ";
	cin >> m;
	vector<prem> prems(n);
	vector<tar> tars(m);
	for (int i = 0; i < n; i++) {
		cout << "Ingrese datos del premio " << i+1 << " (Codigo,descripcion,valor creditos): ";
		cin >> prems[i].cod >> prems[i].desc >> prems[i].vcre;
	}
	for (int i = 0; i < m; i++) {
		cout << "Ingrese datos de la tarjeta " << i+1 << " (Numero,codigo,saldo,creditos): ";
		cin >> tars[i].num >> tars[i].nc >> tars[i].saldo >> tars[i].cre;
	}
	int ntar, cd;
	while (true) {
		cout << "Ingrese nro de tarjeta y cod de premio para canjear (0 0 para terminar): ";
		cin >> ntar >> cd;
		if (ntar == 0 && cd == 0) break;
		int resul = cp(tars, prems, ntar, cd);
		switch (resul) {
		case 0: cout << "Canje realizado con exito"<<endl; break;
		case 1: cout << "Numero de tarjeta incorrecto"; break;
		case 2: cout << "Numero de premio incorrecto"; break;
		case 3: cout << "Creditos insuficientes"; break;
		}
	}
	cout << "Datos finales de las tarjetas: ";
	for (const auto& t : tars) {
		cout << "Tarjeta " << t.num << ": " << t.nc << ", Saldo: " << t.saldo << ", Creditos: " << t.cre;
	}
	
	return 0;
}
