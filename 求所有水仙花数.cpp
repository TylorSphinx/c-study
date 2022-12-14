#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	for (int i = 100; i < 1000; i++) {
		a = i % 10;//获取个位
		b = i / 10 % 10;//获取十位
		c = i / 100;//获取百位
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << i << endl;
		}
	}
	return 0;
}
