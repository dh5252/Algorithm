#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <string>
#include <list>
using namespace std;

/*
경우의 수를 따져보면 얼마 되지 않으므로 브루트포스를 이용하면 된다.
최대 경우는 2^N인데 N의 최대가 15이므로 안전하게 계산이 가능하다.
재귀를 이용한다. 베이스 케이스는 (현재 날짜 - 1)이 N이상이면 재귀를 종료한다.
한 조각은 각 날짜에 상담을 할지 안할지이다.
*/


int N;


int maxProfit(int TP[][2],int index,int profit) {

	if (index >= N) {
		return profit;
	}

	int maxP = 0;
	maxP = max(maxProfit(TP, index + 1, profit), maxP);


	if (index + TP[index][0] <= N)
		maxP = max(maxProfit(TP, index + TP[index][0], profit + TP[index][1]), maxP);

	return maxP;
}

int main() {


	cin >> N;

	int TP[15][2];

	for (int i = 0;N > i;i++) {
		cin >> TP[i][0] >> TP[i][1];
	}

	cout << maxProfit(TP, 0, 0) ;


	return 0;
}
