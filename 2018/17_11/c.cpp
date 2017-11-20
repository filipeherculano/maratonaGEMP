#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define dbg(x) cerr << ">>>> " << x << endl;
#define _ << " , " <<
#define mp make_pair
#define mt make_tuple
#define x first
#define y second
#define ii pair<int,int>
#define iii pair<ii, int>
#define point pair<double, double>
#define vi vector<int> 
#define maxn 1010
#define MOD 1000000007
#define PI 3.14159265358979323846264338327950288

typedef unsigned long long llu;
typedef long long int ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-6;
const int mod = 1000000009;

using namespace std;

int t, m, n, zero, one, color[maxn];
vector<int> adj[maxn];

void dfs(int i, int c){
	if(c == 0) zero++;
	else if(c == 1) one++;
	color[i] = c;
	REP(j,adj[i].size()){
		if(color[adj[i][j]] == -1){
			dfs(adj[i][j], 1-c);
		}
	}
}

int main(){
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(color,-1,sizeof color);
		REP(i,m){
			int a,b; scanf("%d %d",&a,&b); a--; b--;
			adj[a].pb(b);
			adj[b].pb(a);
		}
		dfs(0,0);
		cout << max(zero, one) << endl;
		REP(i,n) adj[i].clear();
		zero = 0; one = 0;
	}
	return 0;
}
