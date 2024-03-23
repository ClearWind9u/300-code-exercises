//Tao ngau nhien mang 1 chieu n phan tu nguyen co gia tri trong doan [-100, 100]
//Xuat ra man hinh "run" tang dai nhat tim thay dau tien
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int a[100], b[100], n, count = 1, max = 0;
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < n; j++) {
		if (a[j] < a[j + 1]) count++;
		else {
			if (count > max) {
				max = count;
				for (int k = j - max + 1, t = 0; k <= j, t < max; k++, t++) {
					b[t] = a[k];
				}
			}
			count = 1;
		}
	}
	cout << "\"run\" tang dai nhat: ";
	for (int i = 0; i < max; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}