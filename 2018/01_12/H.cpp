// Author : Matheus Monteiro
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1661.html

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int main()
{
    ll n;
	while(cin >> n and n)
	{
		ll ans = 0;
		ll m, k = 0;
		while(n--)
		{
			cin >> m;
			k += m;
			ans += abs(k);
		}
		cout << ans << '\n';
	}
	
	return 0;	
}
