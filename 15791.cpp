#include <iostream>
using namespace std;
const long long mod = 1000000007;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, K; cin >> N >> K;
  if (K > N / 2) K = N - K;
  long long a = 1;
  long long b = 1;
  long long c = 1;
  for (int i = 0; i < K; i++) {
    a *= N-i;
    a %= mod;
    b *= K-i;
    b %= mod;
  }
  for (long long i = mod - 2; i > 0; i >>= 1) {
    if (i & 1) {
      c *= b;
      c %= mod;
    }
    b *= b;
    b %= mod;
  }
  cout << (a * c) % mod;
  return 0;
}