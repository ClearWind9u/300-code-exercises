//In ra n so nguyen to dau tien
#include <iostream>
using namespace std;
bool check(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}
int main() {
	int n, count = 0;
	cout << "Nhap n: "; cin >> n;
	for (int i = 2; ; i++) {
		if (count == n) break;
		if (check(i)) { cout << i << " "; count++; }
	}
	return 0;
}