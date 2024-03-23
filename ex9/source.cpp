//Cho biet goc nhap vao thuoc goc vuong nao cua vong tron luong giac
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int min;
	double deg, rad;
	const double PI = atan(1) * 4;
	cout << "Nhap so do x cua goc (phut): "; cin >> min;
	deg = min * 1.0 / 60;
	for (int i = 1; i < deg / 360; i++) { deg = deg - 360; }
	if (deg == 0 || deg == 360) cout << "x nam giua goc vuong thu 4 va 1\n";
	else if (0 < deg && deg < 90) cout << "x thuoc goc vuong thu 1\n";
	else if (deg == 90) cout << "x nam giua goc vuong thu 1 va 2\n";
	else if (90 < deg && deg < 180) cout << "x thuoc goc vuong thu 2\n";
	else if (deg == 180) cout << "x nam giua goc vuong thu 2 va 3\n";
	else if (180 < deg && deg < 270) cout << "x thuoc goc vuong thu 3\n";
	else if (deg == 270) cout << "x nam giua goc vuong thu 3 va 4\n";
	else cout << "x thuoc goc vuong thu 4\n";
	rad = PI / 180 * deg;
	cout << "cos(x) = " << cos(rad);
	return 0;
}