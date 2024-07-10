#include <iostream>
#include <vector>
using namespace std;

int main() {
		const int numart = 25;
		const int numsuc = 4;
		vector<int> vpa(numart, 0);
		vector<vector<int>> vps(numsuc, vector<int>(numart, 0));
		
		int cs, ca, cant;
		
		cout << "Ingrese las ventas (Cod.sucursal,Cod.art y cantidad). Ingrese 0 0 0 para terminar:" << endl;
		
		while (true) {
			cin >> cs >> ca >> cant;
			if (cs == 0 && ca == 0 && cant == 0) break;
			
			if (cs >= 1 && cs <= numsuc && ca >= 1 && ca <= numart) {
				vpa[ca - 1] += cant;
				vps[cs - 1][ca - 1] += cant;
			} else {
				cout << "Codigo invalido. Por favor ingrese un codigo de sucursal entre 1 y 4 y un codigo de articulo entre 1 y 25." << endl;
			}
		}
		
		cout << "Las cantidad de unidades vendidas por la empresa de cada artículo son:" << endl;
		for (int i = 0; i < numart; ++i) {
			cout << "Artículo " << i + 1 << ": " << vpa[i] << " unidades" << endl;
		}
		
		int ts3 = 0;
		for (int i = 0; i < numart; ++i) {
			ts3 += vps[2][i]; // Sucursal 3 es índice 2
		}
		cout << "Total de unidades vendidas por la sucursal 3, sumando todos los artículos son: " << ts3 << " unidades" << endl;
		
		cout << "Cantidad vendida por la sucursal 1 del artículo 6 son: " << vps[0][5] << " unidades" << endl; // Sucursal 1 es índice 0, Artículo 6 es índice 5
		
		int mva8 = vps[0][7];
		int smva8 = 1; // Empezamos asumiendo que es la sucursal 1
		for (int i = 1; i < numsuc; ++i) {
			if (vps[i][7] > mva8) {
				mva8 = vps[i][7];
				smva8 = i + 1;
			}
		}
		cout <<  "La sucursal que vendió más unidades del artículo 8 es la sucursal " << smva8 << " con " << mva8 << " unidades" << endl;
		
		return 0;
}

