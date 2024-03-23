//Nhap nam va thu cho ngay dau nam. In lich truc cua 5 ban (A, B, C, D, E) trong thang do
#include <iostream>
using namespace std;
int sum(int day, int month, int year) {
	bool nhuan;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
	else nhuan = 0;
	int s = (int)(30.42 * (month - 1)) + day;
	if (month == 2 || (month > 2 && nhuan)) s++;
	if (month > 2 && month < 8) s--;
	return s;
}

int main() {
	int maxday, day, year, date, month, count;
	string str, people = "ABCDE";
	bool nhuan;
	cout << "Nhap nam: "; cin >> year;
	cout << "Nhap thu cho ngay dau tien cua nam: "; cin >> date;
	cout << "Nhap thang: "; cin >> month;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) nhuan = 1;
	else nhuan = 0;
	if (date == 0) count = 1;
	else count = 0;
	cout << "    SUN    MON    TUE    WED    THU    FRI    SAT\n";
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { maxday = 31; }
	if (month == 4 || month == 6 || month == 9 || month == 11) { maxday = 30; }
	if (month == 2) {
		if (nhuan) maxday = 29;
		else maxday = 28;
	}
	day = 1;
	for (int i = 0; i < (date + sum(day, month, year) - 1) % 7; i++) { cout << "       "; }
	if ((date + sum(day, month, year) - 1) % 7 == 0) cout << "  " << day << " [ ]";
	else cout << "  " << day << " [" << people[(sum(day, month, year) - (date + sum(day, month, year) - 1) / 7 - count - 1) % 5] << "]";
	if ((date + sum(day, month, year) - 1) % 7 == 6) cout << endl;
	for (day = 2; day <= maxday; day++) {
		if (day < 10) str = " ";
		else str = ""; 
		if ((date + sum(day, month, year) - 1) % 7 == 0) cout << " " << str << day << " [ ]";
		else cout << " " << str << day << " [" << people[(sum(day, month, year) - (date + sum(day, month, year) - 1) / 7 - count - 1) % 5] << "]";
		if ((date + sum(day, month, year) - 1) % 7 == 6 || day == maxday) cout << endl;
	}
	return 0;
}