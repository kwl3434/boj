#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    int n, count =0;
    cin >> n;
    while (n>0)
    {
        char arr[101];
        int alpa[26] = {0,};
        int len, cnt =0;
        cin >> arr;
        len =strlen(arr);
        for (int i=0; i<len; i++){
            if (arr[i] != arr[i+1])
                alpa[(int)arr[i]-97]++;
        }
        for (int i =0 ; i< 26; i++)
            if(alpa[i]>1)cnt++;
        if (cnt==0)count++;
        n--;
    }
    cout << count;
    return 0;
}