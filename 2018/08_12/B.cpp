// Author : Sidney Xavier
// Link: http://codeforces.com/problemset/problem/550/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<pair<int, int>> v1, v2;
	for(int i = 0; i < s.size() - 1; i++)
	{
		if(s[i] == 'A' and s[i+1] == 'B') v1.push_back({i, i + 1});
		if(s[i] == 'B' and s[i + 1] == 'A') v2.push_back({i, i + 1});
	}
	bool fl = false;
	for(int i = 0; i < v1.size() and !fl; i++)
	{
		for(int j = 0; j < v2.size() and !fl; j++)
		{
			if(v1[i].first != v2[j].second and v1[i].second != v2[j].first)
				fl = true;
		}
	}
	cout << (fl ? "YES\n": "NO\n");
	return 0;
}


