#include <iostream>
#include <algorithm>
using namespace std;

/*
����⵵�� �� ������ ������ ���� ���� �Է°� E, S, M

< ���� > E,S,M�� �� ������ ���϶��� 0���� �ʱ�ȭ���־�� ��. 
���� ��� E�� 15�϶� Y�� 15�� ������ E�� ���� ������ �� ���⶧��. �������� Ǯ���⶧���� �����־����
*/




int main() {

	int Y; // ����� �⵵
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