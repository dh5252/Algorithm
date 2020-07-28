#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <string>
using namespace std;

/*
전형적인 브루트포스
시간복잡도를 분석하고 시간이 넉넉하면 완전탐색을 진행한다!
이 문제는 시간제한이 2초라 넉넉했다.
*/


bool isHansu(int X) {

	if (X <= 99) return true;

	int gongcha;


	gongcha = (X % 10) - (X / 10 % 10);
	X /= 10;
	
	while (1) {
		
		if (gongcha != (X % 10) - (X / 10) % 10) return false;
		X /= 10;
		if (X < 10) return true;
	
	}
}


int main(){

	int N;

	cin >> N;

	int cnt = 0;

	for (int i = 1;N + 1 > i;i++) {
		if (isHansu(i)) cnt++;
	}

	cout << cnt;
}
