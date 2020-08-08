#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <string>
#include <list>
using namespace std;

/*
N의 최대 크기는 50, 시간복잡도는 O(N^2)
1초안에 충분히 돌아감!
-> 완전탐색
*/


int body[50][2];

int Rank[50];


bool compareBody(int beforeWei,int beforeHei,int afterWei,int afterHei) {

	if (beforeWei < afterWei && beforeHei < afterHei) return true;

	return false;
}

void setRank(int index,int N) {

	int cnt = 0;

	for (int i = 0;N > i;i++) {

		if (compareBody(body[index][0], body[index][1], body[i][0], body[i][1])) cnt++;

	}

	Rank[index] += cnt + 1;
}


int main() {

	int N;
	int x, y;

	cin >> N;


	for (int i = 0;N > i;i++) {

		cin >> x >> y;

		body[i][0] = x;
		body[i][1] = y;

	}

	for (int i = 0;N > i;i++) {
		setRank(i, N);
		cout << Rank[i] << " ";
	}

	

	return 0;
}
