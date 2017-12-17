// Author : Felipe Herculano
// Link: http://codeforces.com/problemset/problem/489/C

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

int m,s;

int main(){
	cin >> m >> s;
	int cnt = s;	
	string low, high;
	if(m == 1 && s == 0) {
		puts("0 0");
		return 0;
	}
	if(cnt < 1 || cnt > (m*9)) {
		puts("-1 -1");
		return 0;
	}	
	cnt = s;
	for(int i = 0; i < m; i++){
		high += (min(9,cnt) + '0');
		cnt -= min(9,cnt);
	}
	low = high; reverse(all(low));
	for(int i = 0; i < m; i++){
		if(low[i] != '0' && low[0] == '0'){
			low[0]++;
			low[i]--;
			break;
		}
	}
	cout << low << " " << high << endl;
	return 0;
}
