//In ra 3 so theo thu tu tang dan, chi dung 1 bien phu
#include <iostream>
using namespace std;
int main() {
	int a, b, c, tmp;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	tmp = a;
	if (tmp > b) tmp = b;
	if (tmp > c) tmp = c;
	cout << "Tang dan: " << tmp;
	if (tmp == a) {
		if (b > c) cout << " " << c << " " << b;
		else cout << " " << b << " " << c;
	}
	else if (tmp == b) {
		if (a > c) cout << " " << c << " " << a;
		else cout << " " << a << " " << c;
	}
	else {
		if (a > b) cout << " " << b << " " << a;
		else cout << " " << a << " " << b;
	}

	return 0;
}