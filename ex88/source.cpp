//Tao mot ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu la gia tri ngau nhien trong doan [-100, 100]
//Viet ham kiem tra xem ma tran co dong nhat hay khong. Neu khong, in ra ma tran dong nhat cung bac voi ma tran tren
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, * a, check = 1;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j && a[i * n + j] != 1) check = 0;
			if (i != j && a[i * n + j]) check = 0;
			a[i * n + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * n + j];
		}
		cout << endl;
	}
	if (check) cout << "Ma tran tren dong nhat\n";
	else {
		cout << "Ma tran tren khong dong nhat\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) a[i * n + j] = 1;
				if (i != j) a[i * n + j] = 0;
				cout << setw(5) << a[i * n + j];
			}
			cout << endl;
		}
	}
	return 0;
}