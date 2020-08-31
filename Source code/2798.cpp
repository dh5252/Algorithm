#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

/*
	2798번
	N의 크기가 100이 최대이므로 100C3을 확인해보면 10^8이 넘어가지 않으므로
	완전탐색 실시한다.
	베이스케이스의 순서를 잘못해서 한번 틀렸다.
	베이스케이스의 순서에 유념하면서 풀도록 하자.
*/

int N, M;
int card[100];

int findMax(int sum, int choice, int index) {

	if (sum > M) return 0;
	if (choice == 3) return sum;
	if (index == N) return 0;

	int Max = 0;

	Max = max(Max, findMax(sum + card[index], choice + 1, index + 1));

	Max = max(Max, findMax(sum, choice, index + 1));

	return Max;


}


int main() {

	cin >> N >> M;

	for (int i = 0; N > i; i++) {
		cin >> card[i];
	}

	cout << findMax(0, 0, 0);

	return 0;
}