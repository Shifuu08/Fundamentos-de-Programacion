#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <string>
using namespace std;
const int ne = 5;
const int pr = 0;
const int sf = 1;
void icv(const array<array<int, 2>, ne>& vehi) {
	cout << "Cantidad de vehiculos registrados por cada tipo y destino:" << endl;
	for (int i = 0; i < ne; ++i) {
		cout << "Tipo " << i + 1 << " a Parana: " << vehi[i][pr] << ", a Santa Fe: " << vehi[i][sf] << endl;
	}
}
void idtmp(const array<array<int, 2>, ne>& vehi, int destino) {
	vector<pair<int, int>> conteos;
	for (int i = 0; i < ne; ++i) {
		conteos.emplace_back(vehi[i][destino], i + 1);
	}
	sort(conteos.rbegin(), conteos.rend());
	cout << "Los dos tipos de vehiculos que mas pasaron hacia " << (destino == pr ? "Parana" : "Santa Fe") << " son:" << endl;
	cout << "Tipo " << conteos[0].second << " con " << conteos[0].first << " vehículos" << endl;
	cout << "Tipo " << conteos[1].second << " con " << conteos[1].first << " vehículos" << endl;
}
void irt(const array<array<int, 2>, ne>& vehi, const array<double, ne>& costos) {
	double rpr = 0;
	double rsf = 0;
	for (int i = 0; i < ne; ++i) {
		rpr += vehi[i][pr] * costos[i];
		rsf += vehi[i][sf] * costos[i];
	}
	cout << "Recaudacion total a Paraná: " << rpr << endl;
	cout << "Recaudacion total a Santa Fe: " << rsf << endl;
}
int main() {
array<double, ne> costos;
	cout << "Ingrese el costo para cada tipo de vehiculo (1-Motos, 2-Autos, 3-Furgones, 4-Camiones, 5-Colectivos):" << endl;
	for (int i = 0; i < ne; ++i) {
		cout << "Costo para tipo " << i + 1 << ": ";
		cin >> costos[i];
	}
	array<array<int, 2>, ne> vehi{};
	cout << "Ingrese los pares de datos (Tipo de vehiculo y destino 'P' o 'S') (Tipo de vehículo 0 para terminar):" << endl;
	while (true) {
		int tipo;
		char destino;
		cout << "Tipo de vehículo: ";
		cin >> tipo;
		if (tipo == 0) break;
		cout << "Destino (P/S): ";
		cin >> destino;
		
		if (destino == 'P') {
			vehi[tipo - 1][pr]++;
		} else if (destino == 'S') {
			vehi[tipo - 1][sf]++;
		}
	}
	icv(vehi);
	char du;
	cout << "Ingrese el destino ('P' o 'S') para conocer los dos tipos de vehículos que más pasaron: ";
	cin >> du;
	if (du == 'P') {
		idtmp(vehi, pr);
	} else if (du == 'S') {
		idtmp(vehi,sf);
	}
	irt(vehi, costos);
	return 0;
}

