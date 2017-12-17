// Author : Sidney Xavier
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1134.html

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0, g = 0, d = 0, n;
	while(cin >> n and n != 4)
	{
		if(n == 1) a++;
		else if(n == 2) g++;
		else if(n == 3) d++;
	}
	cout << "MUITO OBRIGADO\n";
	cout << "Alcool: " << a << '\n';
	cout << "Gasolina: " << g << '\n';
	cout << "Diesel: " << d << '\n';

	return 0;
}
