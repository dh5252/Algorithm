#include <iostream>
#include <algorithm>
using namespace std;

/*
문제 설계 먼저!
64를 계속 반으로 나눴을때, 마지막엔 1의 조각이 나오고, 1,2,4,8.. 조각이 이렇게 된다는점에서
결국 이진수로 바꿨을때 1의 개수라고 떠올릴 수 있으면 쉽다.

*/


int main() {

	int X, cnt = 1;

	cin >> X;

	while (X > 1) {
		cnt += X % 2;
		X /= 2;
	}

	cout << cnt;

	return 0;
}