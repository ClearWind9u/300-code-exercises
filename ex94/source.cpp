//Tao ma tran A vuong bac n (n > 1, nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-100, 100]
//Tao roi xuat ma tran con B vuong bac n - 1 tu ma tran A bang cach loai bo dong va cot chua phan tu co tri tuyet doi lon nhat
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a, * b, max, maxi, maxj, counti = 0, countj = 0;
label:
	cout << "Nhap bac ma tran (n > 1): "; cin >> n;
	if (n <= 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 201 - 100;
			if (i * n + j == 0) {
				max = a[i * n + j]; maxi = i; maxj = j;
			}
			if (max < a[i * n + j]) {
				max = a[i * n + j];
				maxi = i;
				maxj = j;
			}
			cout << setw(5) << a[i * n + j];
		}
	}
	b = myAlloc(n - 1);
	cout << "Ma tran B:\n";
	for (int i = 0; i < n; i++) {
		if (i == maxi) {
			counti = 1;  continue;
		}
		for (int j = 0; j < n; j++) {
			if (j == maxj) {
				countj = 1; continue;
			}
			b[(i - counti) * n + j - countj] = a[i * n + j];
			cout << setw(5) << b[(i - counti) * n + j - countj];
		}
		cout << endl;
	}
	return 0;
}