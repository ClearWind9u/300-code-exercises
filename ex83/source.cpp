//Cho 2 mang A, B la 2 tap hop duoc nhap tu ban phim.Tao mang C la 1 tap hop gom cac phan tu:
//a. Xuat hien trong ca A va B (giao)
//b. Khong xuat hien trong B (hieu)
//c. Xuat hien trong A hoac B (hop)
#include <iostream>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n, sizeof(int));
}

void expand(int** a, int *p, int x) {
	int* tmp;
	tmp = (int*)realloc(*a, (*p + 1) * sizeof(int));
	*a = tmp;
	(*a)[*p] = x;
	(*p)++;
}

int main() {
	int* A, * B, * C, m, n, p = 0;
	cout << "Nhap so luong phan tu cua mang A: "; cin >> m;
	A = myAlloc(m);
	cout << "Nhap " << m << " phan tu cua A: ";
	for (int i = 0; i < m; i++) cin >> A[i];
	cout << "Nhap so luong phan tu cua mang B: "; cin >> n;
	B = myAlloc(n);
	cout << "Nhap " << n << " phan tu cua B: ";
	for (int i = 0; i < n; i++) cin >> B[i];
	C = myAlloc(p);
	//a
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i] == B[j]) expand(&C, &p, A[i]);
		}
	}
	cout << "C = A * B: {";
	for (int k = 0; k < p; k++) {
		if (k == p - 1) cout << C[k] << "}\n";
		else cout << C[k] << ", ";
	}
	//b
	p = 0;
	C = myAlloc(p);
	for (int i = 0; i < m; i++) {
		int check = 0;
		for (int j = 0; j < n; j++) {
			if (A[i] == B[j]) check = 1;
		}
		if(!check) expand(&C, &p, A[i]);
	}
	cout << "C = A \\ B: {";
	for (int k = 0; k < p; k++) {
		if (k == p - 1) cout << C[k] << "}\n";
		else cout << C[k] << ", ";
	}
	//c
	p = 0;
	C = myAlloc(p);
	for (int i = 0; i < m; i++) expand(&C, &p, A[i]);
	for (int j = 0; j < n; j++) {
		int check = 0;
		for (int i = 0; i < m; i++) {
			if (B[j] == A[i]) check = 1;
		}
		if (!check) expand(&C, &p, B[j]);
	}
	cout << "C = A + B: {";
	for (int k = 0; k < p; k++) {
		if (k == p - 1) cout << C[k] << "}\n";
		else cout << C[k] << ", ";
	}
	return 0;
}