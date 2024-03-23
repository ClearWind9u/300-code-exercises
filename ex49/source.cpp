//Tinh can so lien tuc
#include <iostream>
#include <math.h>
using namespace std;

double sq(double x, double y) {
	return pow(y, 1 / x);
}

int main() {
	int n; double s = 0;
	cout << "Nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		s += sq(i + 1, i + s) - s;
	}
	cout << "Ket qua: " << s;
	return 0;
}