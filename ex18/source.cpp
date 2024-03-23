//Nhap vao so gio. Doi sang so tuan, ngay, gio tuong ung
#include <iostream>
using namespace std;
int main() {
	unsigned int hours, week, day, hour;
	cout << "Nhap so gio: "; cin >> hours;
	week = hours / (24 * 7);
	hours = hours % (24 * 7);
	day = hours / 24;
	hour = hours % 24;
	cout << week << " tuan, " << day << " ngay, " << hour << " gio" << endl;
	return 0;
}