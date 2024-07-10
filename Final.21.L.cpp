#include <iostream>
#include <vector>
using namespace std;
bool io(vector<int>& v, int x) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			return false;
		}
	}
	for (auto it = v.begin(); it != v.end(); ++it) {
		if (*it < x) {
			v.insert(it, x);
			return true;
		}
	}
	v.push_back(x);
	return true;
}
int main() {
	vector<int> v = {10, 8, 5, 3, 1};
	int x = 6;
	bool resul = io(v, x);
	cout << "El elemento " << (resul ? "fue insertado" : "no fue insertado") << endl;
	cout << "Arreglo resultante: ";
	for (int num : v) {
		cout << num << " ";
	}
	
	return 0;
}
