//Tao ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-10, 10]
//Xuat ma tran B tu ma tran nguon A, sao cho B[i][j] bang tong cac phan tu thuoc hai duong cheo di qua phan tu A[i][j]
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc1(int n) {
	return (int*)calloc(n * n, sizeof(int));
}
int* myAlloc2(int n) {
	return (int*)calloc(2 * n, sizeof(int));
}
int main() {
	srand(time(NULL));
	int n, * a, * b, * sumd1, * sumd2;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc1(n); b = myAlloc1(n);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 21 - 10;
			cout << setw(5) << a[i * n + j];
		}
	}
	sumd1 = myAlloc2(n); sumd2 = myAlloc2(n);
	for (int k = - n + 1; k < n; k++) {
		int s1, s2;
		s1 = s2 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (j == i + k) s1 += a[i * n + j];
				if (j == n - 1 + k - i) s2 += a[i * n + j];
			}
		}
		sumd1[k + n - 1] = s1;
		sumd2[k + n - 1] = s2;
	}
	cout << "Ma tran B:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			b[i * n + j] = sumd1[j - i + n - 1] + sumd2[j + i] - a[i * n + j];
			cout << setw(5) << b[i * n + j];
		}
	}
	return 0;
}