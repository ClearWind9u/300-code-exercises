//Kiem tra 2 ve cua cong thuc voi n bat ki
// xich ma i chay tu 1 den n (i^3) = n^2.(n + 1)^2/4
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int vp = 0, vt = 0, n;
	cout << "Nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		vt += pow(i, 3);
	}
	vp = pow(n, 2) * pow(n + 1, 2) / 4;
	cout << "Ve trai = " << vt << endl;
	cout << "Ve phai = " << vp << endl;
	return 0;
}