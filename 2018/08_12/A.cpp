// Author : Matheus Monteiro
// Link: http://codeforces.com/problemset/problem/451/B

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
int pos[100005];

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i], pos[i] = i;
	
	sort(pos, pos+n, [](int a, int b){return arr[a] < arr[b];});

	int l = INT_MAX;
	int r = INT_MIN;
	
	for(int i = 0; i < n; i++)
		if(pos[i] != i)
		{
			l = min(l, i);
			r = max(r, i);
		}
	if(l == INT_MAX and r == INT_MIN)
		cout << "yes\n1 1\n";
	else
	{
		reverse(arr+l, arr+r+1);
		if(is_sorted(arr, arr+n))
			cout << "yes\n" << l+1 << ' ' << r+1 << '\n';
		else
			cout << "no\n";
	}

	return 0;
}
