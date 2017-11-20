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

vector<int> new_base(int num, int base){
	vector<int> res;
	do {
		res.pb(num % base);
		num /= base;
	} while(num);
	reverse(all(res));
	return res;
}

bool is_palin(vector<int> s){
	int l = 0, r = (int) s.size()-1;
	while(l <= r){
		if(s[l] != s[r]) return false;
		l++; r--;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll num; cin >> num;
		vector<int> res;
		FOR(i,2,17) {
			if(is_palin( new_base(num,i) ) ) res.pb(i);
		}
		if((int) res.size() == 0) puts("-1");
		else {
			REP(i,res.size()){
				if(i) printf(" ");
				printf("%d", res[i]);
			}
			puts("");
		}
	}
	return 0;
}
