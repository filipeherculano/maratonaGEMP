// Author : Humberto Pires

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
double a[100005];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = n - 1; i > (n - m - 1); --i) cout << a[i] << '\n';
}
