#include <iostream>
#include <vector>
using namespace std;
int facto(int n);
float hip(float cat1,float cat2);
bool esprimo(int n);
void mostrar(vector<int> arreglo);
void divresto(int a, int b, int &coe,int &rest){
	coe=a/b;
	rest=a%b;}
	void intercambio(int &a,int &b){
		int aux=a;
		a=b;
		b=aux;
	}
		void insertar(const vector<int> &v, int nuevo);
		vector<int> insertar1(vector<int> v1,int nuevo1);
		int suma3(int a,int b,int c);
int main() {
	int n,a,b,co,re;
	cout<<"Ingrese los valores: "<<endl;
	cin>>n;
	cout<<"El valor de n es: "<<n<<endl;
	cin>>a;
	cout<<"El valor de A es: "<<a<<endl;
	cin>>b;
	cout<<"El valor de B es: "<<b<<endl;
	cin>>co;
	cout<<"El valor del coeficiente es: "<<co<<endl;
	cin>>re;
	cout<<"El valor del resto es: "<<re<<endl;
	return 0;
}

