// Author : Filipe Herculano Rocha

#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define dbg(x) cerr << ">>>> " << x << endl;
#define _ << " , " <<
#define mp make_pair
#define f first
#define s second
#define ii pair<int,int>
#define maxn 333333

typedef unsigned long long llu;
typedef long long int ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n, pd[(1 << 18)], mat[18][18];

int dfs(int bit){
	if(bit == (1 << n)-1) return 0;
	
	if(pd[bit] != -1) return pd[bit];
	
	int order = __builtin_popcount(bit), res = INF;
	REP(i,n)
		if(!(bit&(1 << i)))
			res = min(res, mat[i][order] + dfs(bit | (1 << i)));
			
	return pd[bit] = res;
}

int main(){
	while(scanf("%d", &n) && n){
		memset(pd,-1,sizeof pd);
		REP(i,n) REP(j,n) scanf("%d", &mat[i][j]);
		cout << dfs(0) << endl;
	}
	return 0;
}
