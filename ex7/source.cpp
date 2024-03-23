// Giai pt bac 1: ax + b = 0
#include <iostream>
using namespace std;
int main() {
	double a, b, x;
	cout << "Nhap a, b: "; cin >> a >> b;
	if (!a) { b ? cout << "Phuong trinh vo nghiem" : cout << "Phuong trinh vo so nghiem"; return 0; }
	if (!b) { cout << "x = " << 0; return 0; }
	x = -b / a;
	cout << "x = " << x;
	return 0;
}