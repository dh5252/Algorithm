#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
using namespace std;

/*
배열을 지역변수로 선언하면 스택 오버플로우가 일어나므로
전역변수로 선언하여 데이터 영역에 메모리를 할당한다.
또는 동적으로 할당하여 힙 영역에 메모리를 할당해도 무방하다.
*/


int num[10001] = { 0 };

int dn(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main() {


	for (int i = 1; 10000 >= i;i++) {
		num[dn(i)] = 1;
	}

	for (int i = 1; 10000 >= i;i++) {
		if (num[i] == 0) cout << i << endl;
	}

	return 0;
}