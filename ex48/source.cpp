//Tim uoc so le lon nhat cua n va uoc so lon nhat cua n la luy thua cua 2
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, ul = 0, u2 = 0;
	cout << "Nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (i % 2) ul = i;
			else for (int j = 1; pow(2, j) <= n; j++) if (pow(2, j) == i) u2 = i;
		}
	}
	if (ul != 0) cout << "US le lon nhat: " << ul << endl;
	else cout << "Khong co US le\n";
	if (u2 != 0) cout << "US lon nhat la luy thua cua 2: " << u2 << endl;
	else cout << "Khong co US la luy thua cua 2\n";
	return 0;
}