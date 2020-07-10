#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
using namespace std;

/*
유클리드 호제법 (최대공약수, 최소공배수) 외워두자!
*/

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {

	return a * b / gcd(a, b);

}


int main() {

	int T;
	int A, B;

	cin >> T;

	for (int i = 0;T > i;i++) {
		cin >> A >> B;
		cout << lcm(A, B) << endl;
	}



	return 0;
}