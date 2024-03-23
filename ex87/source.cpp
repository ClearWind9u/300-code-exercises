//Tao ma tran A vuong bac n (n nhap tu ban phim) voi cac phan tu duoc nhap tu ban phim
//Tinh tong cac phan tu tren duong cheo chinh (vet - trace) cua ma tran A
//Kiem tra xem ma tran A co phai la ma tran tam giac khong. Neu phai, tinh dinh thuc cua ma tran do
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	int n, * a, trace = 0, det = 1, check = 1;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = "; cin >> a[i * n + j];
			if (i == j) { trace += a[i * n + j]; det *= a[i * n + j]; }
			if (i > j && a[i * n + j]) check = 0;
		}
	}
	for (int k = 0; k < n * n; k++) {
		cout << setw(5) << a[k];
		if ((k % n) == (n - 1)) cout << endl;
	}
	cout << "Trace = " << trace << endl;
	if (check) cout << "det(A) = " << det << endl;
	else cout << "Khong phai ma tran tam giac tren\n";
	return 0;
}