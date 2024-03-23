//Viet chuong trinh tinh sin(x) voi do chinh xac 10^-4 theo chuoi Taylor
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	double x, kq, tmp = 0, fact = 1;
	cout << "Nhap x (radian): "; cin >> x; kq = x;
	for (int i = 1; fabs(kq - tmp) >= 1e-4; i++) {
		tmp = kq;
		kq += pow(-1, i) * pow(x, 2 * i + 1) / (fact *= (2 * i + 1) * (2 * i));
	}
	cout << "Cong thuc Taylor: sin(" << setprecision(2) << fixed << x << ") = " << setprecision(4) << fixed << kq << endl;
	cout << "Sin() cua math.h: sin(" << setprecision(2) << fixed << x << ") = " << setprecision(4) << fixed << sin(x) << endl;
	return 0;
}