//Tao ngau nhien mang 1 chieu n phan tu nguyen co gia tri trong doan [-100, 100]
//Sap xep cac phan tu trong mang theo thu tu tang dan
//Chen 1 phan tu x vao trong mang da duoc sap xep tang dan (van giu nguyen tinh tang dan cua no)
#include <iostream>
using namespace std;
int main() {
	int a[100], n, tmp, x;
	srand(time(NULL));
label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Mang sap xep tang:\n";
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Nhap x: "; cin >> x;
	for (int i = 0; i < n; i++) {
		if (a[i] >= x) {
			for (int j = n; j > i; j--) a[j] = a[j - 1];
			a[i] = x;
			break;
		}
		if (a[n - 1] < x) { a[n] = x; break; }
	}
	for (int i = 0; i <= n; i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}