//Tao mang ngau nhieu gom n phan tu nguyen co gia tri trong doan [-100, 100]
//Sap xep sao cho vi tri chua gia tri chan van chua gia tri chan nhung tang dan, vi tri chua gia tri le van chua gia tri le nhung giam dan
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
			if ((a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) || (a[i] % 2 && a[j] % 2 && a[i] < a[j])) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}