//Nhap vao 1 nam, in lich cua nam do. Tinh thu cho ngay dau nam cua nam do
#include <iostream>
using namespace std;
int dayofweek(int day, int month, int year) {
	int d = (14 - month) / 12;
	int y = year - d;
	int m = month + 12 * d - 2;
	int dof = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return dof;
}

int main() {
	int maxday, day, year;
	string str;
	bool nhuan;
	cout << "Nhap nam: "; cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
	else nhuan = 0;
	for (int month = 1; month < 13; month++) {
		cout << "Thang " << month << endl;
		cout << "  S  M  T  W  T  F  S\n";
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { maxday = 31; }
		if (month == 4 || month == 6 || month == 9 || month == 11) { maxday = 30; }
		if (month == 2) {
			if (nhuan) maxday = 29;
			else maxday = 28;
		}
		day = 1;
		for (int i = 0; i < dayofweek(day, month, year); i++) { cout << "   "; }
		cout << "  " << day;
		if (dayofweek(day, month, year) == 6) cout << endl;
		for (day = 2; day <= maxday; day++) {
			if (day < 10) str = " ";
			else str = "";
			cout << " " << str << day;
			if (dayofweek(day, month, year) == 6 || day == maxday) cout << endl;
		}
	}
	return 0;
}