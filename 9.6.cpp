#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int mesa= 12;
	vector<double> topm(mesa, 0.0);
	int dia, mes;
	double monto;
	
	cout << "Ingrese los aportes (monto,dia y mes). Ingrese monto 0 para terminar:" << endl;
	
	while (true) {
		cin >> monto;
		if (monto == 0) break;
		cin >> dia >> mes;
		if (mes >= 1 && mes <= mesa) {
			topm[mes - 1] += monto;
		} else {
			cout << "Mes invalido. Por favor ingrese un mes entre 1 y 12." << endl;
		}
	}
	
	cout << "Total recaudado por mes:" << endl;
	for (int i = 0; i < mesa; ++i) {
		cout << "Mes " << i + 1 << ": $" << topm[i] << endl;
	}
	
	double mena = topm[0];
	int mesma = 0;
	for (int i = 1; i < mesa; ++i) {
		if (topm[i] < mena) {
			mena = topm[i];
			mesma = i;
		}
	}
	
	cout << "El mes de menor aporte es el mes " << mesma + 1 << " con un total de $" << mena << endl;
	
}
