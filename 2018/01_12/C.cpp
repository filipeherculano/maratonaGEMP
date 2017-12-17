// Author : Matheus Monteiro
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1013.html

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a, max(b, c)) << " eh o maior\n";

	return 0;
}
