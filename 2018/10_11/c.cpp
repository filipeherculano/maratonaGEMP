// Author : Gabriel Galdino

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, n1 = 0, m, m1 = 0, a, a1 = 0, k, k1 = 0;
	string str;
	vector<int> v;

	cin >> n >> m >> a >> k;

	cin >> str;
	n1 = str.size();
	for(int i = 0; i < str.size(); i++)
	{
		if(islower(str[i])) m1++;
		if(isupper(str[i])) a1++;
		if(isdigit(str[i])) k1++;
	}
	if(n1 >= n and m1 >= m and a1 >= a and k1 >= k) cout << "Ok =/\n";
	else cout << "Ufa :)\n";
	return 0;
}
