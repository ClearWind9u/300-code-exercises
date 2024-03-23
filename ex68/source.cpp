//Tao ngau nhien mang 1 chieu n phan tu nguyen (n chan) co gia tri chua trong doan [100, 200] 
//Chia cac phan tu cua mang thanh 2 nhom, sao cho hieu cua tong cua cac phan tu nhom nay va tong cua cac phan tu nhom kia la 1 so duong nho nhat
#include <iostream>
using namespace std;
int main() {
	int a[100], n, tmp, sum1 = 0, sum2 = 0;
	srand(time(NULL));
	label:
	cout << "Nhap n (n chan): "; cin >> n;
	if (n % 2) goto label;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101 + 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 1; i < n; i += 2) {
		cout << a[i] << " ";
		sum1 += a[i];
	}
	cout << ": " << sum1 << endl;
	for (int i = 0; i < n; i += 2) {
		cout << a[i] << " ";
		sum2 += a[i];
	}
	cout << ": " << sum2 << endl;
	cout << "Hieu nho nhat = " << sum1 - sum2 << endl;
	return 0;
}