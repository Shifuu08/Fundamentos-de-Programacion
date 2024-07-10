#include <iostream>
#include <vector>
using namespace std;
void impa(const vector<vector<double>>& matriz) {
	for (const auto& fila : matriz) {
		for (double valor : fila) {
			cout << valor << " ";
		}
		cout << endl;
	}
}
void icol(vector<vector<double>>& A, const vector<double>& V, int i) {
	int N = A.size();
	int M = A[0].size();
	if (i < 0 || i > M) {
		cerr << "Indice fuera de rango" << endl;
		return;
	}
	for (int fila = 0; fila < N; ++fila) {
		A[fila].insert(A[fila].begin() + i, V[fila]);
	}
}
int main() {
	int N = 3;
	int M = 3;
	vector<vector<double>> A = {
		{1.1, 2.2, 3.3},
	{4.4, 5.5, 6.6},
		{7.7, 8.8, 9.9}
	};
	vector<double> V = {10.1, 11.1, 12.1};
	int i = 1;
	cout << "Matriz original:" << endl;
	impa(A);
	icol(A, V, i);
	cout << "Matriz después de insertar la columna: " << endl;
	impa(A);
	return 0;
}
