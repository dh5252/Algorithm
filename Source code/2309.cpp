#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <string>
#include <list>
using namespace std;

/*
재귀호출을 통한 완전탐색으로 풀 수도 있으나,
9C7 = 9C2 라는 조합의 특징을 살려 이중반복문으로 쉽게 풀었다.
*/

int shortGuy[9];


int main() {
	int sum = 0;

	for (int i = 0;9 > i;i++) {
		cin >> shortGuy[i];
		sum += shortGuy[i];
	}

	int except1, except2;

	for (int i = 0;9 > i;i++) {
		for (int j = i + 1; 9 > j;j++) {
			if (sum - shortGuy[i] - shortGuy[j] == 100){
				except1 = i;
				except2 = j;
			}
		}
	}

	list<int> forSort;

	for (int i = 0;9 > i;i++) {
		if (i != except1 && i != except2) {
			forSort.push_back(shortGuy[i]);
		}
	}

	forSort.sort();

	for (list<int>::iterator i = forSort.begin();forSort.end() != i;i++) {
		cout << *i << endl;
	}

}
