// Author : Matheus Monteiro
// Link: http://codeforces.com/problemset/problem/746/D

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10; 
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

int n, k, a, b;
string s;

bool qtd(char c)
{
    int ans = 0;
    REP(i, n)
    {
        if(s[i] == c)
            ans++;
        else
            ans = 0;
        if(ans > k)
            return true;
    }
    return false;
}

bool check(int i, char c)
{
    int ans = 1;
    int j = i - 1;
    while(j >= 0 and s[j] == c)
        j--, ans++;
    j = i + 1;
    while(j < n and s[j] == c)
        j++, ans++;
    return ans <= k;
}

void solve(char c, char cc)
{
    REP(i, n) s += c;
    int cont = 0, _b = b;
    int _k = (b > 0 ? (n / b) : k);
    REP(i, n)
    {
        cont++;
        if(cont == k+1 and _b)
            s[i] = cc, cont = 0, _b--;
    }
    REP(i, n)
        if(i-1 >= 0 and i+1 < n and s[i] == c and s[i-1] == c  and s[i+1] == c and _b)
            s[i] = cc, cont = 0, _b--;
    REP(i, n)
    {
        if(s[i] == c and check(i, cc) and _b)
            s[i] = cc, _b--;
        if(!_b) break;
    }
    if(qtd(c) or qtd(cc) or _b)
    {
        cout << "NO\n";
        return;
    }
    cout << s << '\n';
}

int main()
{
    cin >> n >> k >> a >> b;
    
    if(a > b)
        solve('G', 'B');
    else
    {
        swap(a, b);
        solve('B', 'G');    
    }  
	return 0;
}
