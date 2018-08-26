#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n, len;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		len = s.length();
		cout << "String #" << i << '\n';
		for(int j=0;j<len;j++)
			cout << (char)((s[j] - 'A' + 1) % 26 + 'A');
		cout << "\n\n";
	}
}