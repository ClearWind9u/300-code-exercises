//Tao ngau nhien mang 1 chieu n phan tu nguyen co gia tri trong doan [-100, 100]
//Kiem tra trong mang co so le hay khong? Neu co, tim so le lon nhat
//Dich phai xoay vong mang k lan, k nhap tu ban phim
#include <iostream>
using namespace std;
int main() {
	int a[100], n, count = 0, max = -101, index, k, tmp;
	srand(time(NULL));
	label1:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label1;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		if (a[i] % 2) {
			count++;
			if (a[i] > max) {
				max = a[i]; 
				index = i;
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;
	if (count) {
		cout << "Phan tu le lon nhat: a[" << index << "] = " << max << endl;
	}
	else cout << "Khong co phan tu le\n";
	label2:
	cout << "Nhap so lan can dich: "; cin >> k;
	if (k < 0) goto label2;
	while (k) {
		for (int i = n - 1; i >= 0; i--) {
			if (i == n - 1) {
				tmp = a[i];
				a[i] = a[i - 1];
			}
			if (i == 0) a[i] = tmp;
			if (i > 0 && i < n - 1) a[i] = a[i - 1];
		}
		k--;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}