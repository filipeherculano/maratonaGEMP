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
		vector<ll> left(n), right(n), v(n);
		
		REP(i,n) scanf("%lld",&v[i]), right[i] = v[i], left[i] = v[i];
		sort(all(left)); sort(all(right)); sort(all(v));
		reverse(all(right)); reverse(all(left)); reverse(all(v));
		FOR(i,1,n) left[i] += left[i-1];
		for(int i = n-2; i >= 0; i--) right[i] += right[i+1]; 
		
		bool ok = true;
		ok = (left[n-1]%2 == 0);
		for(ll k = 1; k <= n && ok; k++){
			ll sum = k*(k-1);
			int l = k, r = n-1, b;
			while(l <= r){
				b = (l+r)/2;
				if(v[b] >= k){
					if(b == n-1 || v[b+1] < k) break;
					else l = b+1;
				} else r = b-1;
			}
			sum += k*(b-k+1) + (b+1 < n ? right[b+1]:0);
			ok = (left[k-1] <= sum);
		}
		
		if(ok) puts("possivel");
		else puts("impossivel");
	}
	return 0;
}
