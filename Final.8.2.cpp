#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
const int nume = 10;
const int nums = 3;
double cprom(const vector<vector<int>>& matriz, int sist) {
	int te = 0;
	int eqp = 0;
	for (int i = 0; i < nume; ++i) {
		if (matriz[i][sist] != -1) {
			te += matriz[i][sist];
			eqp++;
		}
	}
	return eqp > 0 ? static_cast<double>(te) / eqp : 0.0;
}

int main() {
	vector<vector<int>> cali(nume, vector<int>(nums, -1));
	int code, cods, calif;
	cout << "Ingrese los datos de las pruebas (Cod.equipo,Cod.sist, calificacion).Ingrese code 0 para finalizar:"<<endl;
	while (true) {
		cout << "Codigo de equipo (1-10, 0 para finalizar): ";
		cin >> code;
		if (code == 0) break;
		cout << "Codigo de sist (1-shield, 2-halo, 3-ghost): ";
		cin >> cods;
		cout << "Calificacion (1-5 estrellas): ";
		cin >> calif;
		if (code < 1 || code > 10 || cods < 1 || cods > 3 || calif < 1 || calif > 5) {
			cout << "Entrada invalida. Por favor, intente de nuevo";
			continue;
		}
		cali[code - 1][cods - 1] = calif;
	}
	cout << "Equipos que calificaron los tres sistemas: "<<endl;
	for (int i = 0; i < nume; ++i) {
		if (cali[i][0] != -1 && cali[i][1] != -1 && cali[i][2] != -1) {
			cout << "Equipo " << (i + 1) << ": ";
			for (int j = 0; j < nums; ++j) {
				cout << cali[i][j] << " ";
			}
			cout << endl;
		}
	}
	vector<string> noms = {"Shield", "Halo", "Ghost"};
	double mp = 0.0;
	int ms = -1;
	for (int j = 0; j < nums; ++j) {
		double prom = cprom(cali, j);
		if (prom > mp) {
			mp = prom;
			ms = j;
		}
	}
	if (ms != -1) {
		cout << "El sistema con mayor promedio de estrellas es: " << noms[ms] << " con un promedio de "
			<< fixed << setprecision(2) << mp << " estrellas";
	} else {
		cout << "No se ha probado ningun sistema";
	}
	return 0;
}
