#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;
struct cole {
	string pate;
	int kms;
	int ps;
};
void id(vector<cole> &coles, int n) {
	for (int i = 0; i < n; ++i) {
		cole c;
		cout << "Ingrese la patente del cole " << i + 1 << ": ";
		cin >> c.pate;
		cout << "Ingrese la cantidad de kms recorridos por el cole " << i + 1 << ": ";
		cin >> c.kms;
		cout << "Ingrese la cantidad de pasajeros que subieron al cole " << i + 1 << ": ";
		cin >> c.ps;
		coles.push_back(c);
	}
}
void mp(const vector<cole> &coles) {
	if (coles.size() < 2) {
		cout << "No hay suficientes coles para comparar";
		return;
	}
	
	vector<cole> copia = coles;
	sort(copia.begin(), copia.end(), [](const cole &a, const cole &b) {
		return a.ps < b.ps;
	});
	
	cout << "Las pates de los dos coles que menos pasajeros trasladaron son: " 
		<< copia[0].pate << " y " << copia[1].pate;
}
double pkm(const vector<cole> &coles) {
	int skm = 0;
	for (const auto &cole : coles) {
		skm += cole.kms;
	}
	return static_cast<double>(skm) / coles.size();
}
int csp(const vector<cole> &coles, double promedio) {
	int cont = 0;
	for (const auto &cole : coles) {
		if (cole.kms > promedio + 500) {
			++cont;
		}
	}
	return cont;
}
int main() {
	int n; 
	cout << "Ingrese el numero de coles: "<<endl;
	cin >> n;
	vector<cole> coles;
	id(coles, n);
	mp(coles);
	double promedio = pkm(coles);
	cout << "El promedio de kms recorridos entre todos los coles es: " << promedio << " kms"<<endl;
	int cs = csp(coles, promedio);
	cout << "La cantidad de coles que superan por 500 km el promedio es: " << cs;
	
	return 0;
}

