//Tao ma tran A vuong bac 3 voi cac phan tu la cac gia tri ngau nhien trong doan [0, 9]
//Voi k nguyen duong nhap tu ban phim (k > 1), xuat ma tran luy thua A^k
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	int a[3][3], b[3][3], c[3][3], k;
	for (int i = 0; i < 3; i++, cout << endl) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = b[i][j] = rand() % 10;
			cout << setw(5) << a[i][j];
		}
	}
label:
	cout << "Nhap luy thua (k > 1): "; cin >> k;
	if (k <= 1) goto label;
	for (int l = 2; l <= k; l++) {
		if (l % 2) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					b[i][j] = 0;
					for (int x = 0; x < 3; x++) {
						b[i][j] += c[i][x] * a[x][j];
					}
					if (l == k) cout << setw(5) << b[i][j];
				}
				if (l == k) cout << endl;
			}
		}
		else {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					c[i][j] = 0;
					for (int x = 0; x < 3; x++) {
						c[i][j] += b[i][x] * a[x][j];
					}
					if (l == k) cout << setw(5) << c[i][j];
				}
				if (l == k) cout << endl;
			}
		}
	}
	return 0;
}