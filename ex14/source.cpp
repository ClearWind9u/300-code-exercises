//Tim ngay thang nam tiep theo va truoc do cua ngay thang nam nhap vao
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 2; i++) {
		string days = "", months = "", date;
		unsigned int day, month, year;
		bool nhuan;
		cout << "Nhap ngay, thang, nam: "; cin >> day >> month >> year;
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
		else nhuan = 0;
		/*if (month > 12) { cout << "Khong hop le\n"; continue; }
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day > 31) { cout << "Khong hop le\n"; continue; }
		}
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (day > 30) { cout << "Khong hop le\n"; continue; }
		}
		if (month == 2) {
			if (nhuan) { if (day > 29) { cout << "Khong hop le\n"; continue; } }
			else if (day > 28) { cout << "Khong hop le\n"; continue; }
		}*/
		if (!i) {
			day++;
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) {
				if (day == 32) { day = 1; month++; }
			}
			if (month == 12) {
				if (day == 32) { day = 1; month = 1; year++; }
			}
			if (month == 4 || month == 6 || month == 9 || month == 11) {
				if (day == 31) { day = 1; month++; }
			}
			if (month == 2) {
				if (nhuan) {
					if (day == 30) { day = 1; month++; }
				}
				else if (day == 29) { day = 1; month++; }
			}
		}
		else {
			day--;
			if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11) {
				if (day == 0) { day = 31; month--; }
			}
			if (month == 1) {
				if (day == 0) { day = 31; month = 12; year--; }
			}
			if (month == 5 || month == 7 || month == 10 || month == 12) {
				if (day == 0) { day = 30; month--; }
			}
			if (month == 3) {
				if (nhuan) {
					if (day == 0) { day = 29; month--; }
				}
				else if (day == 0) { day = 28; month--; }
			}
		}
		if (day < 10) days = "0";
		if (month < 10) months = "0";
		if (!i) date = "Ngay mai: ";
		else date = "Hom qua: ";
		cout << date << days << day << "/" << months << month << "/" << year << endl;
	}
	return 0;
}