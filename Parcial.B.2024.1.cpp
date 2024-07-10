#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
struct maqui {
	string nj;
	float ppp;
	int mp;
	string njmp;
};
struct tar {
	int ntar;
	string nc;
	float saldo;
	int cred;
	time_t ufu;
};
bool cj(vector<maqui> &maquis, vector<tar> &tars, int ntar, const string &nj, time_t fa) {
for (auto &tar : tars) {
	if (tar.ntar == ntar) {
	for (const auto &maqui : maquis) {
	if (maqui.nj == nj) {
	if (tar.saldo >= maqui.ppp) {
	tar.saldo -= maqui.ppp;
	tar.ufu = fa;
	return true;
	} else {
	return false;
	}
	}
}
}
}
	return false; 
}
void fj(vector<maqui> &maquis, vector<tar> &tars, int ntar, const string &nj, int po, int credg) {
for (auto &tar : tars) {
 if (tar.ntar == ntar) {
 tar.cred += credg;
 for (auto &maqui : maquis) {
 if (maqui.nj == nj) {
 if (po > maqui.mp) {
 maqui.mp = po;
 maqui.njmp = tar.nc;
    }
	}
}
 return;
	}
}
}
float rtar(vector<tar> &tars, int ntar, float monto) {
for (auto &tar : tars) {
	if (tar.ntar == ntar) {
	tar.saldo += monto;
	return tar.saldo;
	}
}
return -1; 
}
void etars(vector<tar> &tars, time_t fa) {
vector<tar>::iterator it = tars.begin();
while (it != tars.end()) {
	if (difftime(fa, it->ufu) > 2 * 365 * 24 * 60 * 60) {
	it = tars.erase(it);
	} else {
	++it;
	}
}
}
int main() {

	return 0;
}

