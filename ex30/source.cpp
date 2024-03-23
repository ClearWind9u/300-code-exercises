//Nhap lai suat nam, tien gui va thoi han gui tien. In ra von tich luy tung nam
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	double p = 0, r = 0, a;
	int n = 0;
	cout << "Nhap lai suat, tien von, thoi han: "; cin >> r >> p >> n;
	if (p > 0 && r > 0 && n > 0) {
		cout << "Lai suat: " << r * 100 << "%\n";
		cout << "Von ban dau: " << p << "\n";
		cout << "Thoi han: " << n << " nam\n";
		cout << "Nam" << setw(15) << "Von\n";
		a = p;
		for (int i = 1; i <= n; i++) {
			a *= (1 + r);
			cout << setw(3) << i << setw(14) << a << endl;
		}
	}
	else cout << "Nhap thieu hoac nhap loi!";
	return 0;
}