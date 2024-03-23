//Nhap vao 2 khoang thoi gian. Tinh thoi gian nam giua 2 khoang nay
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int hour1, min1, sec1, hour2, min2, sec2, time;
	cout << "Nhap gio, phut, giay [1]: "; cin >> hour1 >> min1 >> sec1;
	cout << "Nhap gio, phut, giay [2]: "; cin >> hour2 >> min2 >> sec2;
	time = abs(3600 * hour1 + 60 * min1 + sec1 - 3600 * hour2 - 60 * min2 - sec2); 
	cout << "Hieu thoi gian: " << time / 3600 << " gio " << (time % 3600) / 60 << " phut " << (time % 3600) % 60 << " giay " << endl;
	return 0;
}