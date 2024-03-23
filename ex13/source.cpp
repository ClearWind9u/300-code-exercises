//Kiem tra ngay, thang, nam nhap vao co hop le khong. Tinh thu trong tuan cua ngay do.
#include <iostream>
using namespace std;
int main() {
	unsigned int day, month, year, dayofweek, d, y, m;
	bool nhuan;
	cout << "Nhap ngay, thang va nam: "; cin >> day >> month >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
	else nhuan = 0;
	if (month > 12) { cout << "Khong hop le\n"; return 0; }
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day > 31) { cout << "Khong hop le\n"; return 0; }
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) { cout << "Khong hop le\n"; return 0; }
	}
	if (month == 2) {
		if (nhuan) { if (day > 29) { cout << "Khong hop le\n"; return 0; } }
		else if (day > 28) { cout << "Khong hop le\n"; return 0; }
	}
	cout << "Hop le\n";
	d = (14 - month) / 12;
	y = year - d;
	m = month + 12 * d - 2;
	dayofweek = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	if (dayofweek == 1) cout << "Thu 2";
	else if (dayofweek == 2) cout << "Thu 3";
	else if (dayofweek == 3) cout << "Thu 4";
	else if (dayofweek == 4) cout << "Thu 5";
	else if (dayofweek == 5) cout << "Thu 6";
	else if (dayofweek == 6) cout << "Thu 7";
	else cout << "Chu nhat";
	return 0;
}