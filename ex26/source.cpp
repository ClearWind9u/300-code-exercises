//Nhap vao tu so va mau so cua 1 phan so (deu khac 0), rut gon phan so do
#include <iostream>
using namespace std;
int main() {
	int tu, mau, gcd, dt = 0, dm = 0;
	string str = "";
	cout << "Nhap tu so, mau so: "; cin >> tu >> mau;
	if (tu < 0) { tu = -tu; dt = 1; }
	if (mau < 0) { mau = -mau; dm = 1; }
	gcd = tu;
	while (tu % gcd || mau % gcd) gcd--;
	tu = tu / gcd; mau = mau / gcd;
	if (dt + dm == 1) str = "-";
	cout << "Rut gon: ";
	if (mau == 1) cout << str << tu;
	else cout << str << tu << "/" << mau;
	return 0;
}