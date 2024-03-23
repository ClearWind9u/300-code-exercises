//Tao ngau nhien mang mot chieu gom n phan tu nguyen co gia tri trong doan [-100, 100]
//Chuyen cac phan tu co gia tri le ve dau mang, cac phan tu co gia tri chan ve cuoi mang. Cac phan tu co gia tri 0 nam o giua
#include <iostream>
using namespace std;
int main() {
	int a[100], tmp, n;
	srand(time(NULL));
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] % 2 && !(a[i] % 2)) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
			if (a[i] % 2 == 0 && a[i] && !(a[j] % 2 == 0 && a[j])) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}