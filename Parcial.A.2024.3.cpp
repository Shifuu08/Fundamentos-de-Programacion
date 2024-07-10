#include <iostream>
#include <string>
#include <vector>
using namespace std;
void eno(vector<string>&v){
	if(v.empty()) return;
	auto it=v.begin();
	auto prev=it;
	++it;
	while(it != v.end()){
		if(*it<*prev){
			it=v.erase(it);
		}else{
			prev=it;
			++it;
		}
	}
}
int main() {
	vector<string> v;
	string input;
	cout<<"Ingrese palabras para el vector (Termine con FIN):"<<endl;
	while(true){
		cin>>input;
		if(input=="FIN") break;
		v.push_back(input);
	}
	eno(v);
	cout<<"Vector resultante ordenado: "<<endl;
	for(const auto& str : v){
		cout<<str<<endl;
	}
	cout<<endl;
	return 0;
}

