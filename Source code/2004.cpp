#include <iostream>
#include <algorithm>
using namespace std;

/*
	25! 의 특정 숫자의 인수개수는 25/특정숫자 + 25/특정숫자^2 + 25/특정숫자^3 + ...
	2와 5의 인수개수를 이런식으로 구하면 된다!
*/


int main() {

	long long n, m, save2 = 0, save5 = 0, i;

	cin >> n >> m;

	for (i = 2;i <= n;i *= 2) {
		save2 += n / i;
	}

	for (i = 5;i <= n;i *= 5) {
		save5 += n / i;
	}


	for (i = 2;i <= m;i *= 2) {
		save2 -= m / i;
	}

	for (i = 5;i <= m;i *= 5) {
		save5 -= m / i;
	}



	for (i = 2;i <= (n - m);i *= 2) {
		save2 -= (n - m) / i;
	}

	for (i = 5;i <= (n - m);i *= 5) {
		save5 -= (n - m) / i;
	}



	if (save5 > save2) cout << save2;
	else cout << save5;



	return 0;
}