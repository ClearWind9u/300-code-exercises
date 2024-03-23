//Tao ma tran A co kich thuoc n x m (n, m nhap tu ban phim) voi cac phan tu la cac gia tri ngau nhien trong doan [-100, 100]
//Lan can cua phan tu Aij duoc hieu la cac phan tu co chi so tuong ung chenh lech voi i, j khong qua 1 don vi
//Xuat ma tran nhi phan B (goi la ma tran cuc tieu) co kich thuoc m x n voi Bij = 1 
//khi tat ca nhung phan tu lan can Aij deu lon hon Aij (khi do Aij duoc goi la phan tu cuc tieu), cac phan tu Bij con lai bang 0
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n, int m) {
	return (int*)calloc(n * m, sizeof(int));
}

int minPos(int* a, int n, int m, int i, int j) {
	int check = 1;
	if (i != 0) {
		if (j != 0) { if (a[(i - 1) * m + j - 1] <= a[i * m + j]) check = 0; }
		if (j != m - 1) { if (a[(i - 1) * m + j + 1] <= a[i * m + j]) check = 0; }
		if (a[(i - 1) * m + j] <= a[i * m + j]) check = 0;
	}
	if (i != n - 1) {
		if (j != 0) { if (a[(i + 1) * m + j - 1] <= a[i * m + j]) check = 0; }
		if (j != m - 1) { if (a[(i + 1) * m + j + 1] <= a[i * m + j]) check = 0; }
		if (a[(i + 1) * m + j] <= a[i * m + j]) check = 0;
	}
	if (j != 0) { if (a[i * m + j - 1] <= a[i * m + j]) check = 0; }
	if (j != m - 1) { if (a[i * m + j + 1] <= a[i * m + j]) check = 0; }
	return check;
}

int main() {
	srand(time(NULL));
	int n, m, * a, * b;
label:
	cout << "Nhap n, m: "; cin >> n >> m;
	if (n < 1 || m < 1) goto label;
	a = myAlloc(n, m);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < m; j++) {
			a[i * m + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * m + j];
		}
	}
	b = myAlloc(n, m);
	cout << "Ma tran cuc tieu:\n";
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < m; j++) {
			b[i * m + j] = minPos(a, n, m, i, j);
			cout << setw(5) << b[i * m + j];
		}
	}
	return 0;
}
