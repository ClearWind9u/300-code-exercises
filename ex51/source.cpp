//Tinh phan so lien tuc: x + 1/(x +  2/(x + 4/...(x + 256/x))) (x khac 0)
#include <iostream>
using namespace std;
int main() {
	double x, F;
	cout << "Nhap x: "; cin >> x; F = x;
	for (int i = 256;i >= 1; i /= 2) {
		F += x + i / F - F;
	}
	cout << "F = " << F;
	return 0;
}