//Tao ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu la gia tri ngau nhien trong doan [-100, 100]
//Hoan chuyen phan tu lon nhat nam tren moi dong voi phan tu nam tren duong cheo chinh cung thuoc dong do
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a, max, index, tmp;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * n + j];
			if (j == 0) { max = a[i * n + j]; index = j; }
			if (max < a[i * n + j]) { max = a[i * n + j]; index = j; }
		}
		if (a[i * n + i] != a[i * n + index]) {
			tmp = a[i * n + i];
			a[i * n + i] = a[i * n + index];
			a[i * n + index] = tmp;
		}
		cout << endl;
	}
	cout << "Ma tran sau khi sap xep:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a[i * n + j];
		}
		cout << endl;
	}
	return 0;
}