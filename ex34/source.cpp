//Tinh gan dung tich phan xac dinh sau voi do chinh xac 10^-6
// tich phan (sin(x)^2.cos(x))dx (can tu 0 den pi/2)
#include <iostream>
#include <math.h>
#define PI  3.14159265358979
using namespace std;

double f(double x) {
	return pow(sin(x), 2) * cos(x);
}

double inter(double a, double b, int n) {
	double h = (b - a) / n;
	double t = 0.5 * (f(a) + f(a + n * h));
	for (int i = 1; i < n; i++) {
		t += f(a + i * h);
	}
	return t * h;
}
int main() {
	int n = 10;
	double kq, dc, e = pow(10, -6);
	dc = 1 / 3.0 * pow(sin(PI / 2), 3);
	while(abs(inter(0, PI / 2, 2 * n) - inter(0, PI / 2, n)) / 3 >= e) {
		n = n * 2;
	}
	kq = inter(0, PI / 2, 2 * n);
	cout << "Ket qua: " << kq << endl;
	cout << "Doi chung: " << dc;
	return 0;
}