#include <iostream>
#include <cstring>
using namespace std;
int N;
int save = 2; 
int cache[2][41];
void fibonacci(int n)
{
        if (N >= save)
        {
               for (int i = save; i <= N; i++)
               {
                       cache[0][i] = cache[0][i - 1] + cache[0][i - 2];
                       cache[1][i] = cache[1][i - 1] + cache[1][i - 2];
               }
               save = N;
        }
}
void initialize(void)
{
        memset(cache, 0, sizeof(cache));
        cache[0][0] = 1;
        cache[1][1] = 1;
}
int main(void)
{
        int T; 
        cin >> T;
        initialize();
        for (int i = 0; i < T; i++)
        {
               cin >> N;
               if (N > 40 || N < 0)
                       return -1;
               fibonacci(N);
               cout << cache[0][N] << " " << cache[1][N] << endl;
        }
        return 0;
}