//Tao mang 1 chieu n phan tu nguyen co gia tri nhap vao tu ban phim
//Tim cac phan tu co so lan xuat hien la nhu nhau va nhieu nhat
#include <iostream>
using namespace std;
int main() {
	int n, a[100], max, pos = -1, oldmax = 0, count = 1;
	label:
	cout << "Nhap n [1, 99]: "; cin >> n;
	if (n < 1 || n > 99) goto label;
	cout << "Nhap " << n << " phan tu:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Phan tu xuat hien nhieu nhat: ";
	do
	{
		max = 0;
		for (int i = pos + 1; i < n; i++) {
			for (int j = i + 1; j < n; j++)	if (a[j] == a[i]) count++;
			if (count > max) { max = count; pos = i; }
			count = 1;
		}
		if (max >= oldmax) {
			oldmax = max; cout << a[pos] << "[" << max << "] ";
		}
	} while (max >= oldmax);
	cout << endl;
	return 0;
}