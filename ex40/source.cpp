//Tim trau dung, trau nam, trau gia thoa man bai toan co
#include <iostream>
using namespace std;
void main() {
	for (int d = 1; d < 20; d++) {
		for (int n = 1; n < 33; n++) {
			int g = (100 - d * 5 - n * 3) * 3;
			if (d + n + g == 100) cout << "(" << d << ", " << n << ", " << g << ")\n";
		}
	}
}