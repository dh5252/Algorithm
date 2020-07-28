#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
using namespace std;

/*
이게 코딩이다...
중첩반복문을 이용한 브루트포스!
(재귀로도 구현가능하다)
*/

int main() {

	int k,num[13];
	

	while (1) {
		cin >> k;
		if (k == 0) break;
		for (int i = 0;k > i;i++) {
			cin >> num[i];
		}

		for (int i = 0; k > i;i++) {
			for (int j = i+1;k > j;j++) {
				for (int l = j+1;k > l;l++) {
					for (int m = l+1;k > m;m++) {
						for (int t = m+1;k > t;t++) {
							for (int u = t+1;k > u;u++) {
								printf("%d %d %d %d %d %d\n", num[i], num[j], num[l], num[m], num[t], num[u]);
							}
						}
					}
				}
			}
		}
		printf("\n");



	}
	
}