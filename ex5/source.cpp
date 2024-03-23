//Xac dinh vi tri tuong doi cua diem M voi tam giac ABC
#include <iostream>
#include <math.h>
using namespace std;
double square(double x1, double y1, double x2, double y2, double x3, double y3) {
	return 0.5 * abs((x1 - x2) * (y1 - y3) - (y1 - y2) * (x1 - x3));
}
int main() {
	double xA, yA, xB, yB, xC, yC, xM, yM, AB, BC, AC, AM, BM, CM, s0, s1, s2, s3;
	cout << "A(xA, yA)? "; cin >> xA >> yA;
	cout << "B(xB, yB)? "; cin >> xB >> yB;
	cout << "C(xC, yC)? "; cin >> xC >> yC;
	cout << "M(xM, yM)? "; cin >> xM >> yM;
	AB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
	AC = sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
	BC = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));
	AM = sqrt((xA - xM) * (xA - xM) + (yA - yM) * (yA - yM));
	BM = sqrt((xB - xM) * (xB - xM) + (yB - yM) * (yB - yM));
	CM = sqrt((xC - xM) * (xC - xM) + (yC - yM) * (yC - yM));
	if ((AM + BM == AB) || (BM + CM == BC) || (AM + CM == AC)) {
		cout << "M nam tren canh tam giac ABC";
		return 0;
	}
	s0 = square(xA, yA, xB, yB, xC, yC);
	s1 = square(xA, yA, xB, yB, xM, yM);
	s2 = square(xA, yA, xC, yC, xM, yM);
	s3 = square(xB, yB, xC, yC, xM, yM);
	if (s1 + s2 + s3 == s0) cout << "M nam trong tam giac ABC";
	else cout << "M nam ngoai tam giac ABC";
	return 0;
}