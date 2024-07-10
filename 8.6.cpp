#include <iostream>
#include <cmath>
#include <utility>
using namespace std;
float discri(float a,float b,float c){
	float disc;
	disc=(pow(b,2)-4*a*c);
	if(disc>=0){
		return disc;
	}else{
		return disc;
	}
}
pair<float,float> real(float disc,float a,float b,float c){
	float r1,r2;
	r1=(-b+sqrt(disc))/2*a;
	r2=(-b-sqrt(disc))/2*a;
	pair<float,float> raices=make_pair(r1,r2);
	return raices;
}
int main() {
	float a,b,c,disc;
	cout<<"Ingrese los valores: "<<endl;
	cin>>a>>b>>c;
	cout<<"Valor A: "<<a<<endl;
	cout<<"Valor B: "<<b<<endl;
	cout<<"Valor C: "<<c<<endl;
	disc=discri(a,b,c);
	if(disc>=0){
		cout<<"Las raices reales son: ";
		pair<float,float>raices(real(disc,a,b,c));
		cout<<raices.first<<" y "<<raices.second<<endl;
	}else{
		cout<<"Las raices son complejas"<<endl;
	}
	return 0;
}

