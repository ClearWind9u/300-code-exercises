//Tao ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu nhap vao tu ban phim
//Xuat tong cac hang va tong cac cot
//Kiem tra xem ma tran tren co tao thanh mot ma phuong khong
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc1(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int* myAlloc2(int n) {
	return (int*)calloc(n, sizeof(int));
}

int main() {
	int n, * a, * sumrow, * sumcol, check = 1, sum, sum1 = 0, sum2 = 0;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc1(n);
	sumrow = myAlloc2(n);
	for (int i = 0; i < n; i++) {
		sumrow[i] = 0;
	}
	sumcol = myAlloc2(n);
	for (int j = 0; j < n; j++) {
		sumcol[j] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "] = "; cin >> a[i * n + j];
			sumrow[i] += a[i * n + j]; sumcol[j] += a[i * n + j];
			if (i == j) sum1 += a[i * n + j];
			if (i + j == n - 1) sum2 += a[i * n + j];
		}
	}
	sum = sumrow[0];
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a[i * n + j];
		}
		cout << setw(15) << "Tong hang " << i << ":" << setw(5) << sumrow[i];
		cout << setw(15) << "Tong cot " << i << ":" << setw(5) << sumcol[i];
		if (sum != sumrow[i]) check = 0;
		if (sum != sumcol[i]) check = 0;
	}
	if (sum != sum1 || sum != sum2) check = 0;
	if (check) cout << "Ma phuong";
	else cout << "Khong phai ma phuong";
	return 0;
}