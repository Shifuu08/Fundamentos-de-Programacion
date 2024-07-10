#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> valores(22);
	int m,p;
	for(int i=1;i<valores.size()-1;i++) {  
		valores[i]=rand()%(150-100+1)+100;
		cout<<valores[i]<<endl;
	}
	cin>>m>>p;
	cout<<"Valor a insertar: "<<m<<endl;
	cout<<"El valor se insertara en la posicion: "<<p<<endl;
	for(int i=valores.size()-1;i>p;i--) {  
		valores[i]=valores[i-1];
	}
	valores[p]=m;
	cout<<"------------------"<<endl;
	cout<<"La lista modificada es: "<<endl;
	for(int i=1;i<valores.size()-1;i++){
		cout<<i<<" : "<<valores[i]<<endl;
	}
	return 0;
}

