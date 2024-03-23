//Lập bảng so sánh hai thang đo nhiệt độ Fahrenheit và Celsius
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double F, C;
	cout << "Celcius" << setw(12) << "Fahrenheit" << setw(16) << "Fahrenheit" << setw(9) << "Celcius" << endl;
	for (int C = 0, F = 32; C < 11 && F < 43; C++, F++) {
		cout << setprecision(2) << fixed << setw(7) << C << setw(12) << 9 * C / 5.0 + 32 << setw(16) << F << setw(9) << 5.0 / 9 * (F - 32) << endl;
	}
	return 0;
}