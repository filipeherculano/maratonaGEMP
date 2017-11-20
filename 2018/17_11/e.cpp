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
	int t; cin >> t;
	while(t--){
		int n; scanf("%d ",&n);
		string line; cin >> line;
		int v[n], cnt = 0; REP(i,line.size()) v[i] = (line[i] == 'D' ? 0:1);
		vector<int> res;
		int last = -1;
		REP(i,n){
			if(v[i] == 0){
				if(i-1 >= 0 && v[i-1] != 2) v[i-1] = 1-v[i-1];
				if(i+1  < n && v[i+1] != 2) v[i+1] = 1-v[i+1];
				
				for(int j = i; j > last; j--){
					v[j] = 2;
					res.pb(j);
				}
				
				last = i;
			}
		}
		
		if((int) res.size() == n){
			puts("Y");
			REP(i,res.size()) {
				if(i) printf(" ");
				printf("%d", res[i]+1);
			}
			puts("");
		} else puts("N");
	}
	return 0;
}
