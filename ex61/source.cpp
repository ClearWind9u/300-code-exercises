//Tao 1 mang gom n phan tu nguyen (co gia tri trong doan [-100; 100]) 
//Tinh tong cac so nguyen duong co trong mang
//Xoa phan tu co vi tri p (p nhap tu ban phim) trong mang
#include <iostream>
using namespace std;
int main() {
	int a[100], n, sum = 0, p;
	srand(time(NULL));
	label1:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) {
		cout << "Error!(1 <= n <= 99). "; goto label1;
	}
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
		if (a[i] > 0) sum += a[i];
	}
	cout << endl;
	cout << "Tong cac so  nguyen duong = " << sum << endl;
	label2:
	cout << "Nhap p [0, " << n - 1 << "]: "; cin >> p;
	if (p < 0 || p > n - 1) {
		cout << "Error!(0 <= p <= " << n - 1 << "). "; goto label2;
	}
	for (int i = 0; i < n - 1; i++) {
		if (i < p) cout << a[i] << " ";
		else {
			a[i] = a[i + 1];
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}