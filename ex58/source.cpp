//Thuc hien thuat toan sang Erastosthenes in ra cac so nguyen to nho hon n so cho truoc (n < 100)
#include <iostream>
using namespace std;
int main() {
	int n;
	label:
	cout << "Nhap n: "; cin >> n;
	if (n >= 100) { cout << "Error! (n < 100). "; goto label; }
	int ar[100] = { 0 };
	for (int i = 2; i <= n; i++) {
		if (!ar[i]) cout << i << " ";
		for (int j = i + i; j <= n; j += i)	ar[j] = 1;
	}
	return 0;
}