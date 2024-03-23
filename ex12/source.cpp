//Giai he phuong trinh 2 an (a1x + b1y = c1; a2x + b2y = c2)
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a1, b1, c1, a2, b2, c2, dx, dy, d;
	cout << "Nhap a1, b1, c1: "; cin >> a1 >> b1 >> c1;
	cout << "Nhap a2, b2, c2: "; cin >> a2 >> b2 >> c2;
	dx = c1 * b2 - b1 * c2;
	dy = a1 * c2 - c1 * a2;
	d = a1 * b2 - a2 * b1;
	if (!d) { (c1/c2 == a1/a2) ? cout << "He phuong trinh vo so nghiem" : cout << "He phuong trinh vo nghiem"; return 0; }
	cout << "x = " << dx / d << endl;
	cout << "y = " << dy / d;
	return 0;
}