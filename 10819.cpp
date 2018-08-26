#include<algorithm>
#include<cstdio>
using namespace std;
int n, a[9];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", a + i);
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) a[i] += a[i - 1];
    if (n % 2) printf("%d", 2 * a[n] - min(3 * a[n / 2] + a[n / 2 + 2], 3 * a[n / 2 + 1] + a[n / 2 - 1]));
    else printf("%d", 2 * a[n] - 2 * a[n / 2] - a[n / 2 + 1] - a[n / 2 - 1]);
    return 0;
}