//Xac dinh vi tri tuong doi cua diem M voi duong tron C
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double xC, yC, r, xM, yM, d;
	cout << "Nhap toa do tam C(xC, yC)? ";
	cin >> xC >> yC;
	cout << "Nhap ban kinh R? ";
	cin >> r;
	cout << "Nhap toa do M(xM, yM)? ";
	cin >> xM >> yM;
	d = sqrt((xC - xM) * (xC - xM) + (yC - yM) * (yC - yM));
	if (d > r)	cout << "M nam ngoai C()";
	else if (d == r) cout << "M nam tren C()";
	else cout << "M nam trong C()";
	return 0;
}