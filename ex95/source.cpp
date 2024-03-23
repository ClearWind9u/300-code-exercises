//Tao ma tran A vuong bac n (n nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-100, 100]
//Cho k nguyen voi 0 <= k < n. Tao va xuat ma tran B vuong bac n tu ma tran A bang cach hoan chuyen dong k voi cot k
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a, k, tmp;
label1:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label1;
	a = myAlloc(n);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * n + j];
		}
	}
label2:
	cout << "Nhap k: "; cin >> k;
	if (k < 0 || k >= n) goto label2;
	for (int i = 0; i < n; i++) {
		if (i == k) continue;
		tmp = a[i * n + k];
		a[i * n + k] = a[k * n + i];
		a[k * n + i] = tmp;
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a[i * n + j];
		}
	}
	return 0;
}