// Author : Sidney Xavier
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1238.html

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string a, b, c;
	while(n--)
	{
		c = "";
		cin >> a >> b;
		int i = 0;
		while(i < max(a.size(), b.size()))
		{
			if(i < a.size())
			cout << a[i];
			if(i < b.size())
			cout << b[i];
			i++;
		}
		cout << '\n';
	}

	return 0;
}
