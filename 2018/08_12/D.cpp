// Author : Felipe Herculano
// Link: http://codeforces.com/problemset/problem/732/B

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
#define maxn 100010
#define maxs 10000010
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

int main(){
	int n,k,res = 0; cin >> n >> k;
	int a[n+2]; FOR(i,1,n+1) scanf("%d",&a[i]);
	a[n+1] = k = a[0] = k;
	REP(i,n+1){
		if(a[i] + a[i+1] < k){
			res += (k - (a[i] + a[i+1]));
			a[i+1] += (k - (a[i] + a[i+1]));
		}
	}
	cout << res << endl;
	FOR(i,1,n+1) cout << a[i] << " "; puts("");
	return 0;
}
