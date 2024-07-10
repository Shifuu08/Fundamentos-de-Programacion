#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct licen {
	string nso;
	string nlc;
	double costo;
};
double cc(const vector<licen>& lic, const vector<int>& cant) {
	double ct = 0.0;
	for (size_t i = 0; i < lic.size(); ++i) {
		ct += lic[i].costo * cant[i];
	}
	return ct;
}
int main() {
	int n;
	cout << "Ingrese la cantidad de programas: ";
	cin >> n;
	vector<licen> lic(n);
	vector<int> cant(n);
	for (int i = 0; i < n; ++i) {
		cout << "Programa " << i + 1 << ": ";
		cout << "Nombre del software: ";
		cin >> lic[i].nso;
		cout << "Nombre de la licencia: ";
		cin >> lic[i].nlc;
		cout << "Costo de la licencia (En dolares): ";
		cin >> lic[i].costo;
		cout << "Cantidad a comprar: ";
		cin >> cant[i];
	}
	double ct = cc(lic, cant);
	cout << "El costo total de la compra de todas las licencias es: $" << ct << endl;
	return 0;
}

