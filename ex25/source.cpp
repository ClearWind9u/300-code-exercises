//Tinh UCLN va BCNN cho 2 so a, b
#include <iostream>
using namespace std;
int main() {
	int a, b, gcd, lcm;
	cout << "Nhap cap (a, b): "; cin >> a >> b;
	gcd = a;
	while (a % gcd || b % gcd) gcd--;
	lcm = a;
	while (lcm % a || lcm % b) lcm++;
	cout << "USCLN (a, b): " << gcd << endl;
	cout << "BSCNN (a, b): " << lcm << endl;
	return 0;
}