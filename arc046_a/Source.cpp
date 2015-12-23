#include <stdlib.h>
#include <iostream>
using namespace std;

//http://arc046.contest.atcoder.jp/tasks/arc046_a
int sub(int N) {
	/*
	1-9 fig1
	10-18 fig2
	19-27 fig3
	28-36 fig4
	*/
	int fig = (N - 1) / 9 + 1;
	//cout << fig << endl;
	int digit = N - ((fig - 1) * 9);
	//cout << digit << endl;
	int answer = 0;
	int fact = 1;
	for (int i = 0; i < fig; i++) {
		answer += fact;
		fact *= 10;
	}
	//cout << answer << endl;
	answer *= digit;
	cout << answer << endl;
	return 0;
}

int main(int argc, char* argv[]) {
#if true
	int N = 0;
	cin >> N;
	return sub(N);
#else
	sub(1);
	sub(11);
	sub(50);
#endif
}
