//Tao ma tran co kich thuoc n x m (n, m nhap tu ban phim) voi cac phan tu la cac tri ngau nhien trong doan [-100, 100]
//Chuyen ma tran A thanh ma tran chuyen vi A* va in ra
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n, int m) {
	return (int*)calloc(n * m, sizeof(int));
}

int main() {
	srand(time(NULL));
	int n, m, * a, * b;
label:
	cout << "Nhap n, m: "; cin >> n >> m;
	if (n < 1 || m < 1) goto label;
	a = myAlloc(n, m); b = myAlloc(m, n);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < m; j++) {
			a[i * m + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * m + j];
		}
	}
	cout << "Ma tran chuyen vi:\n";
	for (int j = 0; j < m; j++, cout << endl) {
		for (int i = 0; i < n; i++) {
			b[j * n + i] = a[i * m + j];
			cout << setw(5) << b[j * n + i];
		}
	}
	return 0;
}