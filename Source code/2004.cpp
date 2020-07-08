#include <iostream>
#include <algorithm>
using namespace std;

/*
	25! �� Ư�� ������ �μ������� 25/Ư������ + 25/Ư������^2 + 25/Ư������^3 + ...
	2�� 5�� �μ������� �̷������� ���ϸ� �ȴ�!
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