// Author : Felipe Herculano
// Link: https://www.urionlinejudge.com.br/repository/UOJ_1160.html

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
	int t; cin >> t;
	while(t--){
		bool found = false;
		ll pa,pb;
		double ga,gb;
		scanf("%lld %lld %lf %lf", &pa,&pb,&ga,&gb);
		for(int i = 0; i <= 100 && !found; i++){
			if(i) {
				pa *= (1.0+(ga/100.0));
				pb *= (1.0+(gb/100.0));
			}
			if(pa > pb) {
				found = true;
				printf("%d anos.\n", i);
			}
		}
		if(!found) puts("Mais de 1 seculo.");
	}
	return 0;
}
