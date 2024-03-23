//Tao ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-100, 100]
//Viet ham xuat tat ca cac duong cheo song song voi duong cheo phu, moi duong cheo tren 1 dong
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * n + j];
		}
		cout << endl;
	}
	cout << "Cac duong cheo song song cheo phu:\n";
	for (int count = 0; count <= 2 * (n - 1); count++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i + j == count) cout << setw(5) << a[i * n + j];
			}
		}
		cout << endl;
	}
	return 0;
}