#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;
struct compe {
	string nombre;
	int tm;
	int ts;
};
int cas(int min, int seg) {
	return min * 60 + seg;
}
void camys(int ts, int &min, int &seg) {
	min = ts / 60;
	seg = ts % 60;
}
int main() {
	int cantcompe;
	cout << "Ingrese la cantidad de competidores: ";
	cin >> cantcompe;
	vector<compe> compees(cantcompe);
	for (int i = 0; i < cantcompe; ++i) {
		cout << "Ingrese el nombre del competidor " << (i + 1) << ": ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, compees[i].nombre);
		int ts = 0;
		for (int j = 0; j < 3; ++j) {
			int min, seg;
			cout << "Ingrese el tiempo de la etapa " << (j + 1) << " en min y seg: ";
			cin >> min >> seg;
			ts += cas(min, seg);
		}
		camys(ts, compees[i].tm, compees[i].ts);
	}
	compe gan = compees[0];
	int mt = cas(gan.tm, gan.ts);
	for (const auto& compe : compees) {
		int tcompe = cas(compe.tm, compe.ts);
		if (tcompe < mt) {
			mt = tcompe;
			gan = compe;
		}
	}
	cout << "El ganador es: " << gan.nombre << " con un tiempo total de "
		 << gan.tm << " min y " << gan.ts << " seg" << endl;
	return 0;
}
