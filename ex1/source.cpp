// Nhap vao dien tich S cua mat cau. Tinh the tich V cua mat cau do
#include <iostream>
#include <numbers>
using namespace std;
int main() {
	double S, V, r;
	const double PI = atan(1) * 4;
	cout << "Nhap dien tich S: ";
	cin >> S;
	r = sqrt(S*1.0/(4*PI));
	V = 4.0 / 3 * PI * r * r * r;
	cout << "The tich V = " << V;
	return 0;
}