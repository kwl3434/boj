#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
int main(void) {
	int N, L;
	scanf("%d %d", &N, &L);
	deque<pii> DQ;
	for (int i = 0; i < N; i++) {
		int value;
		scanf("%d", &value);
		while (!DQ.empty() && DQ.back().first > value) DQ.pop_back();
		DQ.push_back({ value,i });
		while (i - DQ.front().second >= L) DQ.pop_front();
		printf("%d ", DQ.front().first);
	}
}