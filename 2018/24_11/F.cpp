// Author : Matheus Monteiro

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10; 
const int OO = 0x3f3f3f3f;

#define bug(x) cout << #x << " = " << x << '\n'
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) FOR(i, 0, n)
#define fi first
#define se second
#define pb push_back
#define mt make_tuple
//#define gc getchar_unlocked

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int degree[MAX];

int main()
{
	int n, m, caso = 1;
	
	while(cin >> n >> m and (n or m))
	{
        int maxi = 0;
	    memset(degree, 0, sizeof degree);
	    REP(i, m)
        {
            int u, v;
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
            maxi = max(max(degree[u], degree[v]), maxi);
        }
        cout << "Teste " << caso++ << '\n';
        FOR(i , 1, n+1)
            if(degree[i] == maxi) cout << i << ' ';
        cout << "\n\n";
    }
    
	return 0;
}
