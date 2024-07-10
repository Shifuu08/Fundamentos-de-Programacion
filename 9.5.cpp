#include <iostream>
#include <vector>
using namespace std;
int buscar (const vector<int> &v, int x,int n){
	for(int i=n;i<v.size()-1;i++) {  
		if(v[i]==x){
			return 1;
		}
	}
	return -1;
}
void eliminar(vector<int> &v,int p){
	for(int i=p;i<v.size()-1;i++) {  
		v[i]=v[i+1];
	}
	v.pop_back();
}
int main() {
	vector<int> v;
	int N=101;
	int ini=500;
	int fin=550;
	for(int i=0;i<N;i++) { 
		int aux=rand()%(fin-ini+1)+ini;
		v.push_back(aux);
		cout<<i<<" : "<<v[i]<<endl;
		int p=buscar(v,523,N);
		while(p!=-1){
			eliminar(v,p);
			p=buscar(v,523,N);
		}
	}
	return 0;
}

