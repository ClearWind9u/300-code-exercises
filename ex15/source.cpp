//Nhap vao ngay, thang, nam (gia su nhap dung). Tinh xem do la ngay thu bao nhieu trong nam.
#include <iostream>
using namespace std;
int main() {
	unsigned int sum, day, month, year;
	bool nhuan;
	cout << "Nhap ngay, thang, nam: "; cin >> day >> month >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
	else nhuan = 0;
	sum = (int)(30.42 * (month - 1)) + day;
	if (month == 2 || (month > 2 && nhuan)) sum++;
	if (month > 2 && month < 8) sum--;
	cout << "Ngay thu: " << sum << endl;
	return 0;
}