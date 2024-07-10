#include <iostream>
#include <iomanip>
using namespace std;

void impM(double matriz[5][12], int fil, int colu) {
	for (int i = 0; i < fil; ++i) {
		for (int j = 0; j < colu; ++j) {
			cout << setw(8) << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

void impMct(double matriz[5][13], int fil, int colu) {
	for (int i = 0; i < fil; ++i) {
		for (int j = 0; j < colu; ++j) {
			cout << setw(8) << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	const int fil = 5;
	const int colu = 12;
	double lluvias[fil][colu] = {
		{100, 120, -1, 80, 90, 50, 60, -1, 70, 80, 60, 100},
	{90, 110, 70, -1, 85, 60, -1, 75, 65, 95, 80, 85},
		{85, 95, 105, 120, 110, 100, 90, 85, 95, 100, -1, 105},
	{100, 110, 115, 105, 95, 90, 85, 80, 75, 70, 65, 60},
		{75, 85, 95, 100, 105, 110, 115, 120, -1, 130, 135, 140}
	};
	
	// Imprimir matriz original
	cout << "Matriz original con los datos:" << endl;
	impM(lluvias, fil, colu);
	
	// Calcular y completar los datos faltantes con el prom anual del departamento
	for (int i = 0; i < fil; ++i) {
		double suma = 0;
		int cont = 0;
		for (int j = 0; j < colu; ++j) {
			if (lluvias[i][j] != -1) {
				suma += lluvias[i][j];
				cont++;
			}
		}
		double prom = (cont > 0) ? suma / cont : 0;
		
		for (int j = 0; j < colu; ++j) {
			if (lluvias[i][j] == -1) {
				lluvias[i][j] = prom;
			}
		}
	}
	
	// Calcular totales anuales y agregar la columna de totales
	double lluviasct[fil][colu + 1];
	for (int i = 0; i < fil; ++i) {
		double tota = 0;
		for (int j = 0; j < colu; ++j) {
			lluviasct[i][j] = lluvias[i][j];
			tota += lluvias[i][j];
		}
		lluviasct[i][colu] = tota;
	}
	
	// Imprimir matriz modificada
	cout << "Matriz modificada con los datos completados:" << endl;
	impM(lluvias, fil, colu);
	
	// Imprimir matriz con totales anuales
	cout << "Matriz con los totales anuales:" << endl;
	impMct(lluviasct, fil, colu + 1);
	
	// Imprimir los totales anuales de lluvia por departamento
	cout << "Totales anuales de lluvia por departamento:" << endl;
	for (int i = 0; i < fil; ++i) {
		cout << "Departamento " << i + 1 << ": " << lluviasct[i][colu] << " mm" << endl;
	}
	
	return 0;
}
