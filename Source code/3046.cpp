#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int X, cnt=1;
	cin >> X;

	while (X > 1) {
		cnt += X % 2;
		X /= 2;
	}
	
	cout << cnt;
	return 0;
}