#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <string>
#include <list>
using namespace std;

/*
시간제한이 2초인데 시간복잡도는 O(N)
최대 입력은 1000000 = 10^6 씹가능
브루트포스!
*/


bool isConstructor(int N,int M) {
	
	int sum = M;
	while (M>0) {
		sum += M % 10;
		M /= 10;
	}

	if (sum == N) return true;

	return false;
}

int smallestConst(int N) {

	for (int i = 1;N > i;i++) {
		if (isConstructor(N, i)) return i;
	}
	return 0;
}




int main() {

	int N;

	cin >> N;

	cout << smallestConst(N);


}
