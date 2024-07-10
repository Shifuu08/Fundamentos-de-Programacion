#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sf(const vector<int>& fila) {
	int suma = 0;
	for (int valor : fila) {
		suma += valor;
	}
	return suma;
}
void icf(vector<vector<int>>& matriz) {
	if (matriz.empty()) return;
	vector<pair<int, int>> sumas;
	for (int i = 0; i < matriz.size(); ++i) {
		sumas.emplace_back(sf(matriz[i]), i);
	}
	sort(sumas.begin(), sumas.end(), greater<>());
	vector<vector<int>> mo(matriz.size());
	for (int i = 0; i < sumas.size(); ++i) {
		mo[i] = matriz[sumas[i].second];
	}
	matriz = mo;
}
int main() {
	int filas, colu;
	cout << "Ingrese el numero de filas de la matriz: ";
	cin >> filas;
	cout << "Ingrese el numero de columnas de la matriz: ";
	cin >> colu;
	vector<vector<int>> matriz(filas, vector<int>(colu));
	cout << "Ingrese los elementos de la matriz:" << endl;
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < colu; ++j) {
			cin >> matriz[i][j];
		}
	}
	icf(matriz);
	cout << "Matriz despues de intercambiar las filas segun la suma de sus elementos:" << endl;
	for (const auto& fila : matriz) {
		for (int valor : fila) {
			cout << valor << " ";
		}
		cout << endl;
	}
	return 0;
}

