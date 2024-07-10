#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct archivo {
	string nombre;
	int li;
	int fu;
};
void ca(vector<archivo>& archivos, int n) {
	for (int i = 0; i < n; ++i) {
		archivo archivo;
		cout << "Ingrese el nombre del archivo: ";
		cin >> archivo.nombre;
		cout << "Ingrese la cantidad de lineas de codigo: ";
		cin >> archivo.li;
		cout << "Ingrese la cantidad de funciones que define: ";
		cin >> archivo.fu;
		archivos.push_back(archivo);
	}
}


void iplpf(const vector<archivo>& archivos) {
	for (const auto& archivo : archivos) {
		double promedio = archivo.fu == 0 ? 0 : static_cast<double>(archivo.li) / archivo.fu;
		cout << "Archivo: " << archivo.nombre << ", promedio de lineas por funcion: " << promedio << endl;
	}
}


void acml(const vector<archivo>& archivos, string& nombre1, string& nombre2) {
	if (archivos.size() < 2) {
		cout << "No hay suficientes archivos para comparar" << endl;
		return;
	}
	
	auto max1 = max_element(archivos.begin(), archivos.end(), [](const archivo& a, const archivo& b) {
		return a.li < b.li;
	});
	
	auto max2 = max_element(archivos.begin(), archivos.end(), [&](const archivo& a, const archivo& b) {
		return (a.li < b.li || a.nombre == max1->nombre);
	});
	
	nombre1 = max1->nombre;
	nombre2 = max2->nombre;
}


void ct(const vector<archivo>& archivos, int& tli, int& tfu) {
	tli = 0;
	tfu = 0;
	for (const auto& archivo : archivos) {
		tli += archivo.li;
		tfu += archivo.fu;
	}
}

int main() {
	vector<archivo> archivos;
	int n;
	
	cout << "Ingrese la cantidad de archivos: ";
	cin >> n;
	
	ca(archivos, n);
	
	iplpf(archivos);
	
	string archivo1, archivo2;
	acml(archivos, archivo1, archivo2);
	cout << "Archivos con mas lineas de codigo: " << archivo1 << " y " << archivo2 << endl;
	
	int tli, tfu;
	ct(archivos, tli, tfu);
	cout << "Total de lineas: " << tli << ", Total de fuciones: " << tfu << endl;
	
	return 0;
}

