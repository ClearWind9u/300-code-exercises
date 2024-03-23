//Tao ngau nhien mang 1 chieu gom n phan tu nguyen co gia tri trong doan [-100, 100]
//Dung 1 vong lap, tim phan tu co gia tri nho nhat va lon nhat cua mang
//Xoa cac phan tu co tri trung voi gia tri lon nhat cua mang, tru phan tu tim duoc dau tien
#include <iostream>
using namespace std;
int main() {
	int a[100], n, min, max, meet = 0;
	srand(time(NULL));
	cout << "Nhap n [1, 99]: "; cin >> n;
	a[0] = rand() % 201 - 100;
	min = max = a[0];
	cout << a[0] << " ";
	for (int i = 1; i < n; i++) {
		a[i] = rand() % 201 - 100;
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	for (int i = 0; i < n; i++) {
		while (a[i] == max) {
			meet++;
			if (meet != 1) {
				n--;
				for (int j = i; j < n; j++) {
					a[j] = a[j + 1];
				}
			}
			else break;
		}
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}