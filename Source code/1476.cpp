#include <iostream>
#include <algorithm>
using namespace std;

/*
정답년도를 각 범위의 끝으로 나눈 값이 입력값 E, S, M

< 예외 > E,S,M이 각 범위의 끝일때는 0으로 초기화해주어야 함. 
예를 들어 E가 15일때 Y를 15로 나누면 E와 절대 같아질 수 없기때문. 나머지로 풀었기때문에 꼭해주어야함
*/




int main() {

	int Y; // 출력할 년도
	int E, S, M;

	cin >> E >> S >> M;

	if (E == 15) E = 0;
	if (S == 28) S = 0;
	if (M == 19) M = 0;

	for (Y = 1; ;Y++) {
		if (Y % 15 == E && Y % 28 == S && Y % 19 == M) {
			cout << Y;
			break;
		}
	}

	return 0;
}