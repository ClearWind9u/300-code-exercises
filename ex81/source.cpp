//Viet ham tron hai mang A, B da duoc sap xep tang, sao cho mang ket qua la 1 mang sap xep giam
//Khong sap xep truc tiep mang ket qua
#include <iostream>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n, sizeof(int));
}

void merge(int** A, int n, int** B, int m, int** C) {
	for (int i = n - 1, j = m - 1, k = 0; k < m + n; k++) {
		if (i < 0) goto labeli;
		if (j < 0) goto labelj;
		if ((*A)[i] > (*B)[j]) {
labelj:
			(*C)[k] = (*A)[i--];
			continue;
		}
		else {
labeli:
			(*C)[k] = (*B)[j--];
			continue;
		}
	}
}

int main() {
	int* A, * B, * C, n, m, tmp;
label:
	cout << "Nhap so phan tu mang A va B (n, m > 0): "; cin >> n >> m;
	if (n <= 0 || m <= 0) goto label;
	A = myAlloc(n); B = myAlloc(m); 
	C = myAlloc(n + m);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int j = 0; j < m; j++) {
		cin >> B[j];
	}
	cout << "Mang A sap tang: ";
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (A[i] > A[j]) {
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Mang B sap tang: ";
	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < m; j++) {
			if (B[i] > B[j]) {
				tmp = B[i];
				B[i] = B[j];
				B[j] = tmp;
			}
		}
		cout << B[i] << " ";
	}
	cout << endl;
	merge(&A, n, &B, m, &C);
	cout << "Tron A va B thanh C sap giam:\n";
	for (int i = 0; i < m + n; i++) {
		cout << C[i] << " ";
	}
	cout << endl;
	return 0;
}