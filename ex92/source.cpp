//Tao ma tran vuong bac n (n nhap tu ban phim) voi cac phan tu la cac tri nhau nhien trong doan [-100, 100]
//Tim duong cheo, song song voi duong cheo chinh va co tong gia tri cac phan tu la lon nhat
#include <iostream>
#include <iomanip>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n * n, sizeof(int));
}

int main() {
	srand(time(NULL));
label:
	int n, * a, max, maxi, maxj, indexix, indexiy, indexjx, indexjy, indexxmax, indexymax;
	cout << "Nhap bac ma tran: "; cin >> n;
	a = myAlloc(n);
	if (n < 1) goto label;
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = rand() % 201 - 100;
			cout << setw(5) << a[i * n + j];
		}
	}
	cout << "Duong cheo co tong lon nhat:\n";
	max = a[n - 1]; indexxmax = 0; indexymax = n - 1;//gan gia tri max ban dau la phan tu a[0][n - 1]
	for (int i = n - 1, j = n - 1; (i + j) >= 0; i--, j--) { //xet tong cua duong cheo hang tren cung (i = 0) va cot dau tien (j = 0)
		maxi = 0; maxj = 0;
		for (int x = 0, y = 0; (x + i + y + j) < 2 * n; x++, y++) { //phan tu ke tiep thuoc duong cheo do, tang 1 hang (x) va 1 cot (y) 
			if (x == 0 && y == 0) {
				indexix = 0; indexiy = j;
				indexjx = i; indexjy = 0;
			}
			maxi += a[x * n + j + y]; //tong duong cheo hang tren cung (i = 0)
			maxj += a[(i + x) * n + y]; //tong duong cheo cot dau tien (j = 0)
		}
		if (maxi > max) {
			max = maxi;
			indexxmax = indexix;
			indexymax = indexiy;
		}
		if (maxj > max) {
			max = maxj;
			indexxmax = indexjx;
			indexymax = indexjy;
		}
	}
	for (int x = 0, y = 0; (x + indexxmax) < n &&  (y + indexymax) < n; x++, y++) {
		cout << a[(indexxmax + x) * n + indexymax + y] << " ";
	}
	cout << ": " << max << endl;
	return 0;
}