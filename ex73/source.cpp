//Tao mang 1 chieu n phan tu nguyen co gia tri nhap vao tu ban phim
//In ra cac phan tu trong mang co gia tri phan biet
#include <iostream>
using namespace std;
int main() {
	int a[100], b[100], n;
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
				for (int k = j; k < n; k++) {
					a[k] = a[k + 1];
				}
				j--;
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}