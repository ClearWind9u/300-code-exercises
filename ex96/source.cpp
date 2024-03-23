//Tao ma tran A vuong bac n (n nhap tu ban phim) voi cac phan tu co gia tri Aij = sin( i - 2 * j / pi)
//Dem so phan tu khong am cua ma tran
#include <iostream>
#include <iomanip>
#define PI 3.14159265358979
using namespace std;

float* myAlloc(int n) {
	return (float*)calloc(n * n, sizeof(int));
}

int main() {
	int n, count = 0;
	float* a;
label:
	cout << "Nhap bac ma tran: "; cin >> n;
	if (n < 1) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			a[i * n + j] = sin(i - 2 * j / PI);
			if (a[i * n + j] >= 0) count++;
			cout << fixed << setw(10) << a[i * n + j];
		}
	}
	cout << "Co " << count << " phan tu khong am" << endl;
	return 0;
}