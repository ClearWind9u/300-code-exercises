//Tao ngau nhien mang 1 chieu n phan tu nguyen co gia tri trong doan [-100, 100]
//Tinh tong nghich dao cac phan tu trong mang
//Viet ham duyet cac phan tu a[i] cua mang theo thu tu tu trai sang phai, neu a[i] le thi xoa 1 phan tu ben phai cua no
#include <iostream>
using namespace std;
int main() {
	int a[100], n; double nd = 0;
	srand(time(NULL));
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		if (a[i]) nd += 1.0 / a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Tong nghich dao: " << nd << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
		if (a[i] % 2) i++;
	}
	cout << endl;
	return 0;
}