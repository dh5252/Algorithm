#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
가장 작은 '진짜' 약수와 가장 큰 '진짜' 약수의 곱은 N이다.
배열이나 벡터에서 가장 큰 원소를 찾아주는 max_element 함수를 이용했다

*/



int main() {
	
	int Nnum,tmp;
	vector<int> divisor;

	cin >> Nnum;

	for (int i = 0; Nnum > i;i++) {
		cin >> tmp;
		divisor.push_back(tmp);
	}
	cout << (*max_element(divisor.begin(),divisor.end()))*(*min_element(divisor.begin(),divisor.end()));





	return 0;
}