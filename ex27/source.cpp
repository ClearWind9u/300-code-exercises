//Phan tich so nguyen duong n thanh cac thua so nguyen to
#include <iostream>
using namespace std;
bool check(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	int n, i = 2;
	cout << "Nhap n: "; cin >> n;
	while (i != n) {
		if (check(i)) {
			if ((n % i) == 0) { cout << i << " * "; n = n / i; }
			else i++;
		}
		else i++;
	}
	cout << n;
	return 0;
}