#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
using namespace std;

/*
팩토리얼 0은 1으로 간주한다.
왜인지는 나도 모름. 덕분에 한번틀렸다;
*/


int main() {

	int N;
	int gop = 1;

	cin >> N;


	for (int i = 1;N >= i;i++) {
		gop *= i;
	}

	cout << gop;

}