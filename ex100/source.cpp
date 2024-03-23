//Tao ma tran co kich thuoc n x m (n, m nhap tu ban phim) voi cac phan tu duoc nhap tu ban phim
//Ma tran goi la "thua" (sparse matrix) neu so phan tu co gia tri 0 nhieu hon so phan tu co gia tri khac 0
//Kiem tra xem ma tran co "thua" hay khong
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n, int m) {
	return (int*)calloc(n * m, sizeof(int));
}

int main() {
	int n, m, * a, count0 = 0, count = 0, check;
label:
	cout << "Nhap n, m: "; cin >> n >> m;
	if (n < 1 || m < 1) goto label;
	a = myAlloc(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = "; cin >> a[i * m + j];
		}
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << a[i * m + j];
			if (a[i * m + j] == 0) count0++;
			else count++;
		}
	}
	if (count0 > count) cout << "Ma tran thua\n";
	else cout << "Ma tran khong thua\n";
	return 0;
}