#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int numa = 200;
const int numm = 35;
struct nta {
	int na;
	int nm;
	int nf;
};
void id(vector<nta>& datos) {
	for (int i = 0; i < numa; ++i) {
		for (int j = 0; j < numm; ++j) {
			nta n;
			n.na = i + 1;
			n.nm = j + 1;
			cout << "Ingrese la nota final del alumno " << n.na << " en la materia " << n.nm << " (6 a 10): ";
			cin >> n.nf;
			datos.push_back(n);
		}
	}
}
double cpa(const vector<nta>& datos, int alu) {
	double suma = 0;
	int count = 0;
	for (const auto& nta : datos) {
		if (nta.na == alu) {
			suma += nta.nf;
			count++;
		}
	}
	return suma / count;
}
double cpm(const vector<nta>& datos, int mat) {
	double suma = 0;
	int count = 0;
	for (const auto& nta : datos) {
		if (nta.nm == mat) {
			suma += nta.nf;
			count++;
		}
	}
	return suma / count;
}

int main() {
	vector<nta> datos;
	datos.reserve(numa * numm);
	id(datos);
	double mp = 0;
	int ma = 0;
	for (int i = 1; i <= numa; ++i) {
		double prom = cpa(datos, i);
		if (prom > mp) {
			mp = prom;
			ma = i;
		}
	}
	double ppm = 10;
	int mmd = 0;
	for (int i = 1; i <= numm; ++i) {
		double prom = cpm(datos, i);
		if (prom < ppm) {
			ppm = prom;
			mmd = i;
		}
	}
	int nemd = 0;
	for (const auto& nta : datos) {
		if (nta.na == ma && nta.nm == mmd) {
			nemd = nta.nf;
			break;
		}
	}
	cout << "El mejor prom de la carrera es: " << mp << " (alu " << ma << ")";
	cout << "La mat mas dificil es: " << mmd << " con un prom de " << ppm;
	cout << "La nta del alu " << ma << " en la mat " << mmd << " es: " << nemd;
	
	return 0;
}

