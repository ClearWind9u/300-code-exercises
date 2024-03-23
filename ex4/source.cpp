//Nhap do dai 3 canh tam giac. Cho biet la loai tam giac gi va tinh dien tich
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a, b, c, p, S;
	cout << "Nhap 3 canh tam giac: ";
	cin >> a >> b >> c;
	if (!((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a))) {
		cout << "Khong phai la tam giac\n";
		return 0;
	}
	else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
		if ((a == b) || (b == c) || (c == a)) cout << "Tam giac vuong can\n";
		else cout << "Tam giac vuong\n";
	}
	else if (a == b == c) cout << "Tam giac deu\n";
	else if ((a == b) || (b == c) || (a == c)) cout << "Tam giac can\n";
	else cout << "Tam giac thuong\n";
	p = (a + b + c) / 2.0;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich S = " << S;
	return 0;
}