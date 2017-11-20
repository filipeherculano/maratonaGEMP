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
#define maxn 2020
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
	int n;
	while(cin >> n){
		vector<ii> v(n);
		REP(i,n) scanf("%d %d",&v[i].x, &v[i].y);
		sort(all(v));
		int cur = 1;
		REP(i,n){
			if(v[i].x <= cur) cur += v[i].y;
			else cur = v[i].x + v[i].y;
		}
		cout << cur << endl;
	}
	return 0;
}
