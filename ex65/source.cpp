//Tao mang 1 chieu gom n phan tu nguyen co gia tri nhap vao tu ban phim
//Trung binh cong cac so nguyen am le co trong mang
//Xoa cac phan tu co gia tri trung nhau trong mang, chi chua lai 1 phan tu
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a[100], n, count = 0;
	double tbc = 0;
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) { cout << "Error! (1 <= n <= 99). "; goto label; }
	cout << "Nhap " << n << " phan tu:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0 && a[i] % 2) {
			tbc += a[i];
			count++;
		}
	}
	if (count) tbc = tbc / count;
	cout << "Trung binh cong nguyen am le = " << setprecision(2) << fixed << tbc << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				n--;
				for (int k = j; k < n; k++) {
					a[k] = a[k + 1];
				}
				j--;
			}
		}
		cout << a[i] << " ";
	}
	return 0;
}