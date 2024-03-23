//Tim bo ba pythagorean nho hon 100 la 3 so nguyen lien tiep hoac 3 so chan lien tiep
#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i < 100; i++) {
		if (i * i + (i + 1) * (i + 1) == (i + 2) * (i + 2) && i < 98) {
			cout << "( " << i << ", " << i + 1 << ", " << i + 2 << " ) : ba so nguyen lien tiep\n";
		}
		if (i * i + (i + 2) * (i + 2) == (i + 4) * (i + 4) && i < 96) {
			cout << "( " << i << ", " << i + 2 << ", " << i + 4 << " ) : ba so chan lien tiep\n";
		}
	}
	return 0;
}