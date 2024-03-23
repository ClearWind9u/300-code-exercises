//Tao ngau nhien mang 2 chieu vuong co kich thuoc nxn (n nhap tu ban phim) voi cac phan tu ngau nhien trong doan [-100, 100]
//Sap xep lai cac cot cua mang 2 chieu tren sao cho tong tri cac phan tu cua moi cot tang dan tu trai sang phai
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	int a[20][20], b[20], n, tmp, sum = 0;
label:
	cout << "Nhap n (n < 20): "; cin >> n;
	if (n < 1 || n >= 20) goto label;
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 201 - 100;
			cout << setw(5) << a[i][j];
		}
	}
	cout << "Mang sau khi sap xep:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[j][i];
		}
		b[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
				for (int k = 0; k < n; k++) {
					tmp = a[k][i];
					a[k][i] = a[k][j];
					a[k][j] = tmp;
				}
			}
		}
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a[i][j];
		}
	}
	return 0;
}