//Tao ngau nhien mang 1 chieu n phan tu nguyen co gia tri trong doan [-100, 100]
//Nhap so nguyen x, tim phan tu trong mang gan x nhat
//Viet ham chen 1 vao ben phai cac phan tu co gia tri am cua mang
#include <iostream>
using namespace std;

int* myAlloc(int n) {
	return (int*)calloc(n, sizeof(int));
}

void add1(int **a, int n, int x) {
	int *p;
	p = (int*)realloc(*a, (n + 1) * sizeof(int));
	*a = p;
	for (int i = n; i > x + 1; i--) {
		(*a)[i] = (*a)[i - 1];
	}
	(*a)[x + 1] = 1;
}

int main() {
	int* a, n, x, nearest, pos;
	srand(time(NULL));
label:
	cout << "Nhap n (n > 0): "; cin >> n;
	if (n <= 0) goto label;
	a = myAlloc(n);
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Nhap x: "; cin >> x;
	nearest = abs(a[0] - x); pos = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a[i] - x) < nearest) {
			nearest = abs(a[i] - x);
			pos = i;
		}
	}
	cout << "So gan x nhat: " << a[pos] << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			add1(&a, n, i); n++;
		}
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}