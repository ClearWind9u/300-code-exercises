//Tao 1 mang gom n phan tu nguyen (co gia tri trong doan [-100; 100]) 
//Dem so phan tu chia het cho 4 va co chu so tan cung la 6
//Thay cac phan tu le bang 2 lan gia tri cua no
#include <iostream>
using namespace std;
int main() {
	int a[100], n, count = 0;
	srand(time(NULL));
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) { cout << "Error! (1 <= n <= 99). "; goto label; }
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << " ";
		if (a[i] % 20 == 16) count++;
		if (a[i] % 2) a[i] = a[i] * 2;
	}
	cout << endl;
	cout << "Co " << count << " phan tu chia het cho 4, tan cung 6\n";
	cout << "Nhan doi phan tu le:\n";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}