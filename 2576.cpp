#include <iostream>
using namespace std;
int main() {
    int num, small = 101, sum = 0, cnt = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> num;
        if (num % 2 == 1)
        {
            cnt++;
            sum += num;
            if (small > num)
            {
                small = num;
            }
        }
    }
    if (cnt == 0)
    {
        cout << "-1"<<'\n';
        return 0;
    }
    cout << sum << '\n' << small << '\n';
}