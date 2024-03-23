//Tim so fibonacci thu n (n < 40) (dung vong lap)
#include <iostream>
using namespace std;
int main() {
	int n, a1 = 1, a2 = 1, a3 = 1;
	label:
	cout << "Nhap n (n < 40): "; cin >> n;
	if (n >= 40) {
		cout << "Error! (n < 40)." << endl; goto label;
	}
	for (int i = 3; i <= n; i++) {
		if (n == 1 || n == 2) break;
		else {
			a3 = a2 + a1;
			a1 = a2;
			a2 = a3;
		}
	}
	cout << "Fi(" << n << ") = " << a3;
}