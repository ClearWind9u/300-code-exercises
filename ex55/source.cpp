//Tinh can bac 2 cua 1 so nguyen duong bang thuat toan Babylonian. Kiem tra ket qua voi ham sqrt()
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x; double kq = 0, y = 1.0;
	label:
	cout << "Nhap x (x > 0): "; cin >> x;
	if (x <= 0) { cout << "Error! (x > 0). "; goto label; }
	while (kq != y) {
		kq = y;
		y = (y + x / y) / 2;
	}
	cout << "thuat toan babylonian: " << kq << endl;
	cout << "ham sqrt() cua math.h: " << sqrt(x) << endl;
	return 0;
}