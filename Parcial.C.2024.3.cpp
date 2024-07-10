#include <iostream>
#include <cmath>
using namespace std;
unsigned long long facto(int x) {
	if (x <= 1) return 1;
	unsigned long long result = 1;
	for (int i = 2; i <= x; ++i) {
		result *= i;
	}
	return result;
}
double sx(double x, int n) {
	double result = 0.0;
	for (int i = 0; i < n; ++i) {
		int exp = 2 * i + 1;
		double term = pow(x, exp) / facto(exp);
		if (i % 2 == 0) {
			result += term;
		} else {
			result -= term;
		}
	}
	return result / x;
}

int main() {
	double x;
	int n;
	cout << "Ingrese el valor de x: ";
	cin >> x;
	cout << "Ingrese el numero de terminos de la serie: ";
	cin >> n;
	
	double rs = sx(x, n);
	double rsin = sin(x) / x;
	
	cout << "Valor calculado de sen(x)/x con " << n << " terminos: " << rs << endl;
	cout << "Valor de la función predefinida sin(x)/x: " << rsin << endl;
	
	return 0;
}

