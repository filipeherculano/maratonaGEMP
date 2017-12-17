// Author : Matheus Monteiro
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1044.html

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int main()
{
	int a, b;
	
	cin >> a >> b;
	if(a > b)
		swap(a, b);
	if(b%a == 0)
		cout << "Sao Multiplos\n";
	else
		cout << "Nao sao Multiplos\n";
	
	return 0;
}
