//Tao 1 mang gom n phan tu nguyen duong (co gia tri trong doan [10; 20]) 
//Kiem tra tong cac so chan o vi tri le co bang tong cac so le o vi tri chan khong
//Xac dinh xem mang co cap so nguyen to cung nhau (coprime) nao khong
#include <iostream>
using namespace std;

bool check(int x, int y) {
	for (int i = 2; i <= y; i++) {
		if (x % i == 0 && y % i == 0) return false;
	}
	return true;
}

int main() {
	int a[100], n, c = 0, l = 0;
	srand(time(NULL));
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) { cout << "Error!(1 <= n <= 99). "; goto label; }
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 11 + 10;
		cout << a[i] << " ";
		if (i % 2 && !(a[i] % 2)) c += a[i];
		if (!(i % 2) && a[i] % 2) l += a[i];
		
	}
	cout << endl;
	cout << "Tong chan vi tri le (" << c << ") ";
	if (c == l) cout << "bang ";
	else cout << "khac ";
	cout << "tong le vi tri chan (" << l << ")\n";
	cout << "Cac cap nguyen to cung nhau: \n";
	for (int i = 1; i < n; i++) {
		if (check(a[i - 1], a[i])) cout << "(" << a[i - 1] << ", " << a[i] << ")\n";
	}
	return 0;
}