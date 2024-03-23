//Tao mang 1 chieu A, n phan tu nguyen co gia tri nhap vao tu ban phim
//Tao mang 1 chieu B, m phan tu nguyen (m <= n), co gia tri nhap vao tu ban phim
//Tim vi tri xuat hien dau tien cua mang B trong mang A
//Tim so nguyen am cuoi cung cua mang A
#include <iostream>
using namespace std;
int main() {
	int A[100], B[100], n, m, mm, check = 0, pos = -1, last, count = 0;
label1:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label1;
	cout << "Nhap " << n << " phan tu mang A:\n";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		if (A[i] < 0) last = A[i];
		else count++;
	}
label2:
	cout << "Nhap m [1, " << n << "]: "; cin >> m;
	if (m < 1 || m > n) goto label2;
	cout << "Nhap " << m << " phan tu mang B:\n";
	for (int j = 0; j < m; j++) {
		cin >> B[j];
	}
	while (check != m && pos < n) {
		mm = 0; check = 0;
		pos++;
		for (int i = 0 + pos; i < n; i++) {
			if (A[i] == B[mm]) check++;	
			mm++;
			if (mm == m) break;
		}
	}
	if (check == m) cout << "B co trong A tai: A[" << pos << "]\n";
	else cout << "B khong co trong A\n";
	if (count != n) cout << "So nguyen am cuoi: " << last << endl;
	else cout << "A khong co so nguyen am\n";
	return 0;
}