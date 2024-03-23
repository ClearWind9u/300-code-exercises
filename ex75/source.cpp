//Tao mang 1 chieu n phan tu nguyen co gia tri nhap vao tu ban phim
//Cho biet phan tu xuat hien nhieu nhat, xuat hien it nhat tim thay dau tien
#include <iostream>
using namespace std;
int main() {
	int a[100], n, count = 1, max = 0, min = 100, volmax, volmin;
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	cout << "Nhap " << n << " phan tu:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] == a[i]) {
				n--;
				count++;
				for (int k = j; k < n; k++) {
					a[k] = a[k + 1];
				}
				j--;
			}
		}
		if (count < min) {
			min = count; volmin = a[i];
		}
		if (count > max) {
			max = count; volmax = a[i];
		}
		count = 1;
	}
	cout << "Phan tu xuat hien nhieu nhat: " << volmax << "[" << max << "]\n";
	cout << "Phan tu xuat hien it nhat: " << volmin << "[" << min << "]\n";
	return 0;
}