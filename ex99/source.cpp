//Tao hai ma tran vuong cung bac n (n nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-10, 10]
//In ma tran tong va ma tran tich cua hai ma tran tren
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a, * b, * c, * d;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	cout << "Ma tran A:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 21 - 10;
			cout << setw(5) << a[i * n + j];
		}
	}
	b = myAlloc(n);
	cout << "Ma tran B:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			b[i * n + j] = rand() % 21 - 10;
			cout << setw(5) << b[i * n + j];
		}
	}
	c = myAlloc(n); //ma tran tong
	cout << "Ma tran tong:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			c[i * n + j] = a[i * n + j] + b[i * n + j];
			cout << setw(5) << c[i * n + j];
		}
	}
	d = myAlloc(n); // ma tran tich
	cout << "Ma tran tich:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			d[i * n + j] = 0;
			for (int k = 0; k < n; k++) {
				d[i * n + j] += a[i * n + k] * b[k * n + j];
			}
			cout << setw(5) << d[i * n + j];
		}
	}
	return 0;
}