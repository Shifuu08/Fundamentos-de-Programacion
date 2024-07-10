#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
	int n;
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> n;
vector<vector<string>> corre(n, vector<string>(4, "no rindió"));
int nra, nre;
	string nd;
	cout << "Ingrese el nro de alumno (1 a n),nro de evaluacion (1 a 4),y nombre del docente que lo corrigio (ingrese -1 para terminar): ";
	while (true) {
		cin >> nra;
		if (nra == -1) break;
		cin >> nre >> nd;
		if (nra >= 1 && nra <= n && nre >= 1 && nre <= 4) {
			corre[nra - 1][nre - 1] = nd;
		} else {
			cout << "Datos inválidos. Por favor, intente nuevamente";
		}
	}
vector<int> rie(4, 0);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (corre[i][j] != "No rindió") {
				rie[j]++;
			}
		}
	}
	for (int i = 0; i < 4; ++i) {
		cout << "Cantidad de alumnos que rindieron la evaluación " << (i + 1) << ": " << rie[i] << endl;
	}
cout << "Alumnos que no rindieron ninguna de las 4 instancias: ";
	for (int i = 0; i < n; ++i) {
		bool rindio = false;
		for (int j = 0; j < 4; ++j) {
			if (corre[i][j] != "No rindió") {
				rindio = true;
				break;
			}
		}
		if (!rindio) {
			cout << "Alumno " << (i + 1) << endl;
		}
	}
cout<<endl;
cout << "Ingrese el nombre del docente para saber cuantos parciales/recuperatorios corrigio: ";
	cin >> nd;
	int cd = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (corre[i][j] == nd) {
				cd++;
			}
		}
	}
cout << "El docente " << nd << " corrigio " << cd << " parciales/recuperatorios";
	
	return 0;
}
