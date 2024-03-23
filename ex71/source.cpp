//Tao mang 1 chieu n phan tu nguyen co gia tri nhap vao tu ban phim
//Kiem tra xem mang co doi xung hay khong
//Dich trai xoay vong mang k lan, k nhap tu ban phim
#include <iostream>
using namespace std;
int main() {
	int a[100], n, count = 0, k, tmp;
	srand(time(NULL));
	label1:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label1;
	cout << "Nhap " << n << " phan tu: \n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) count++;
	}
	if (count) cout << "Khong doi xung\n";
	else cout << "Doi xung\n";
	label2:
	cout << "Nhap so lan can dich: "; cin >> k;
	if (k < 0) goto label2;
	while (k) {
		for (int i = 0; i < n; i++) {
			if (i == 0) { tmp = a[i]; a[i] = a[i + 1]; }
			if (i == n - 1) a[i] = tmp;
			if (i > 0 && i < n - 1) a[i] = a[i + 1];
		}
		k--;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}