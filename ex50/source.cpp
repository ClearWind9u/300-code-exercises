// Cho s/t = 1/(b1 + 1/(b2 + 1/...(bk-1 + 1/bk)))
//Cho s va t, tim b1, b2... bk
#include <iostream>
using namespace std;
int main() {
	int s, t, a, r;
	label:
	cout << "Nhap s, t (0 < s < t): "; cin >> s >> t;
	if (s <= 0 || s >= t) { cout << "Error! (0 < s < t). "; goto label; }
	a = t / s; r = t % s;
	cout << "[" << a;
	if (r != 0) {
		a = s / r; s = s % r;
		cout << ", " << a;
		for (int i = 1; r != 0 && s != 0; cout << ", " << a, i++) {
			if (i % 2) {
				a = r / s; r = r % s;
			}
			else {
				a = s / r; s = s % r;
			}
		}
	}
	cout << "]\n";
	return 0;
}