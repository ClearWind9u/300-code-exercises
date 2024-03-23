// Nhap n, tinh Fn = xich ma (i chay tu 1 den n) 1 / (n^2 + i)
#include <iostream>
using namespace std;
int main() {
	int n;
	double Fn = 0;
	cout << "Nhap n: "; cin >> n;
	for (float i = 1; i <= n; i++) {
		Fn += 1 / (n * n + i);
	}
	cout << "Fn = " << Fn;
	return 0;
}