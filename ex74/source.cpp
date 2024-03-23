//Tao mang 1 chieu n phan tu nguyen co gia tri nhap vao tu ban phim
//Thong ke so lan xuat hien cua cac phan tu trong mang
#include <iostream>
using namespace std;
int main() {
	int a[100], n, count = 1;
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	cout << "Nhap " << n << " phan tu:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] == a[i]) {
				n--;
				count++;
				for (int k = j; k < n; k++) {
					a[k] = a[k + 1];
				}
				j--;
			}
		}
		cout << a[i] << "[" << count << "] ";
		count = 1;
	}
	cout << endl;
	return 0;
}