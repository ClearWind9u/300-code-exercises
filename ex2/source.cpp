//Tinh khoang cach 2 diem A, B
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double xA, yA, xB, yB, d;
	cout << "A(xA, yA)? ";
	cin >> xA >> yA;
	cout << "B(xB, yB)? ";
	cin >> xB >> yB;
	d = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
	cout << "|AB| = " << d;
	return 0;
}