//Dung vong lap, tinh to hop chap k cua n (k < n < 25)
#include <iostream>
using namespace std;

int combination(int k, int n) {
	int kq = 1;
	for (int i = 1; i <= n - k; i++) {
		kq *= n - i + 1; kq /= i;
	}
	return kq;
}

int main() {
	int k, n;
	label:
	cout << "Nhap n, k (k < n < 25): "; cin >> n >> k;
	if (n <= k || n >= 25 || k <= 0) { cout << "Error! (k < n < 25). "; goto label; }
	cout << "C ( k, n ): " << combination(k, n) << endl;
	cout << "C ( n-k, n ): " << combination(n - k, n) << endl;
}