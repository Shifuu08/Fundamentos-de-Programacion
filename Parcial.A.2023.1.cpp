#include <iostream>
#include <vector>
using namespace std;
int buscar(const vector<string>& v, const string& s,int p){
  for(int i=p;i<v.size();++i) { 
	  if(v[i]==s){
		  return i;
	  }
  }
  return -1;
}
int reemp(vector<string>&v,const string& s1,const string& s2){
	int cont=0;
	int pos=0;
	while(pos!=-1){
		pos=buscar(v,s1,pos);
		if(pos!=-1){
			v[pos]=s2;
			++cont;
			++pos;
		}
	}
	return cont;
}
int main() {
	vector<string> v={"Arbol","Banana","Arbol","Capo","Arbol"};
	string s1="Arbol";
	string s2="Naranja";
	int cont=reemp(v,s1,s2);
	cout<<"Cantidad de reemplazos: "<<cont<<endl;
	cout<<"Vector modificado: ";
	for(const auto& str : v){
		cout<<str<<" ";
	}
	cout<<endl;
	return 0;
}

