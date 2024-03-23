//Tao 1 mang gom n phan tu nguyen (n chan) (co gia tri trong doan [-100; 100]) 
//Tron hoan hao 1 mang: cac phan tu cua mot nua mang sau xen ke voi cac phan tu cua mot nua mang dau. Xuat mang sau khi tron
//Xac dinh so lan tron hoan hao de mang tro ve nhu ban dau
#include <iostream>
using namespace std;

void pershuf(int a[], int t[], int n) {
	for (int i = 0; i < n; i++) {
		if (i < n / 2) t[i * 2] = a[i];
		else t[(i - n / 2) * 2 + 1] = a[i];
	}
	for (int i = 0; i < n; i++) a[i] = t[i]; 
}

int main() {
	srand(time(NULL));
	int n, a[100], b[100], tmp[100];
	cout << "Nhap n (n chan): "; cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		b[i] = a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	pershuf(a, tmp, n);
	for (int i = 0; i < n; i++) {
		cout << tmp[i] << " ";
	}
	cout << endl;
	int count = 1;
	while(1) {
		int check = 0;
		for (int i = 0; i < n; i++) {
			if (b[i] != tmp[i]) check++;
		}

		if (!check) break;
		pershuf(a, tmp, n);
		count++;
	}
	cout << "Can " << count << " lan shuffle de mang tro ve ban dau";
	return 0;
}