//Tao mang gom n phan tu nguyen co gia tri nhap vao tu ban phim
//Dem cac phan tu co tri la luy thua cua 2 trong mang
//Nhap x nguyen, xoa cac phan tu trong mang co tri trung voi x
#include <iostream>
#include <cmath>
using namespace std;

bool check(int x) {
	for (int i = 0; i < x; i++) {
		if (pow(2, i) == x) return true;
	}
	return false;
}

int main() {
	int a[100], n, count = 0, x;
	label1:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) { cout << "Error! (1 <= n <= 99). "; goto label1; }
	cout << "Nhap " << n << " phan tu: \n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (check(a[i])) count++;
	}
	cout << "Co " << count << " so la luy thua cua 2\n";
	label2:
	cout << "Nhap x: "; cin >> x;
	if (x < 0) { cout << "Error! (x >= 0). "; goto label2; }
	for (int i = 0; i < n; i++) {
		if(a[i] != x) cout << a[i] << " ";
	}
	return 0;
}