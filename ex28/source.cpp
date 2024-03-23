//Mo phong ham ROUND cua Excel, dung lam trong 1 so double voi 1 so n cho truoc
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	double x; int n; long mu;
	cout << "Nhap so thuc x: "; cin >> x;
	cout << "Do chinh xac: "; cin >> n;
	if (n >= 0) {
		cout << setprecision(n) << fixed << x;
	}
	else {
		mu = pow(10, -n);
		cout << round(x / mu) * mu;
	}
	return 0;
}