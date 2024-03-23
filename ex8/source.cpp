//Giai phuong trinh bac 2: ax^2 + bx + c = 0
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a, b, c, x, x1, x2, delta;
	cout << "Nhap a, b, c: "; cin >> a >> b >> c;
	if (!a) {
		if (!b) { c ? cout << "Phuong trinh vo nghiem" : cout << "Phuong trinh vo so nghiem"; return 0; }
		if (!c) { cout << "x = " << 0; return 0; }
		x = -c / b;
		cout << "x = " << x;
		return 0;
	}
	delta = b * b - 4 * a * c;
	if (delta < 0) { cout << "Phuong trinh vo nghiem"; return 0; }
	else if (delta == 0) { 
		x = -b / (2 * a); 
		if (x == -0) x = 0;
		cout << "Nghiem kep x = " << x; 
		return 0; 
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
		return 0;
	}
}