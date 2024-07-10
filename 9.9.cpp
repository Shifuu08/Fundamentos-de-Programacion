#include <iostream>
#include <vector>
using namespace std;

int main() {
		const int numa = 25;
		const int nums = 4;
		
		vector<double> precios(numa);
		vector<int> vpa(numa, 0);
		vector<vector<int>> vps(nums, vector<int>(numa, 0));
		vector<double> rps(nums, 0.0);
		
		// Ingresar precios de los artículos
		cout << "Ingrese los precios de los 25 artículos: " << endl;
		for (int i = 0; i < numa; ++i) {
			cout << "Precio del artículo " << i + 1 << ": ";
			cin >> precios[i];
		}
		
		int cs, ca, cant;
		
		cout << "Ingrese las ventas (Cod.sucursal,Cod.articulo,Cantidad) | Ingrese 0 0 0 para terminar:" << endl;
		
		while (true) {
			cin >> cs >> ca >> cant;
			if (cs == 0 && ca == 0 && cant == 0) break;
			
			if (cs >= 1 && cs <= nums && ca >= 1 && ca <= numa) {
				vpa[ca - 1] += cant;
				vps[cs - 1][ca - 1] += cant;
				rps[cs - 1] += cant * precios[ca - 1];
			} else {
				cout << "Codigo invalido (Por favor ingrese un codigo de sucursal entre 1 y 4 y un codigo de articulo entre 1 y 25)" << endl;
			}
		}
		
		cout << "La recaudación de cada sucursal fue:" << endl;
		for (int i = 0; i < nums; ++i) {
			cout << "Sucursal: " << i + 1 << ": $" << rps[i] << endl;
		}
		
		double rte = 0.0;
		for (int i = 0; i < nums; ++i) {
			rte += rps[i];
		}
		cout << "La recaudación de la empresa fue: $" << rte << endl;
		
		double mr = rps[0];
		int smr = 1; // Empezamos asumiendo que es la sucursal 1
		for (int i = 1; i < nums; ++i) {
			if (rps[i] > mr) {
				mr = rps[i];
				smr = i + 1;
			}
		}
		cout << "La sucursal que obtuvo mayor recaudación fue: " << smr << " con $" << mr << endl;
		
		return 0;
}

