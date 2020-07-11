#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
using namespace std;

/*
2번 시간초과 되고 간신히 풀었다,,,
입력최대가 10^5승이고 제한시간도 1초라
O(N)의 시간복잡도, 선형시간에 풀어야했다.
재귀함수와 DP를 사용했다. DP를 사용하지 않으면  O(N^2)의 시간복잡도를 요하므로
제한시간내에 풀 수 없다. 어려운 문제였다.

무식한 방법에서 시간복잡도를 개선하는 쪽으로 풀어야겠다고 생각했다.
*/

int x[100000];
int maxArray[100000][2] = { 0 };

int maxAt(int i) {

	if (i == 0) {
		maxArray[0][0] = 1;
		maxArray[0][1] = x[0];
		return x[0];
	}

	if (maxArray[i][0] == 1) return maxArray[i][1];

	maxArray[i][0] = 1;
	maxArray[i][1] = max(maxAt(i - 1), 0) + x[i];
	return maxArray[i][1];

}

int main() {

	int n,MAX;

	cin >> n;

	for (int i = 0;n > i;i++) {
		cin >> x[i];
		if (i == 0) MAX = maxAt(i);
		else {
			MAX = max(MAX, maxAt(i));
		}
	}

	

	cout << MAX;
}