// Author : Matheus Monteiro

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10; 
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

int t, n;
ll bitmask[MAX];

int main()
{
	scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        memset(bitmask, 0, sizeof bitmask);
        FOR(i, 1, n+1)
        {
            int mi;
            scanf("%d", &mi);
            REP(j, mi)
            {
                ll xij;
                scanf("%lld", &xij);
                bitmask[i] |= (1LL << xij);
            }
        }
        int q;
        scanf("%d", &q);
        while(q--)
        {
            int o, x, y;
            cin >> o >> x >> y;
            if(o == 1)
                printf("%d\n", __builtin_popcountll((bitmask[x] & bitmask[y])));
            else
                printf("%d\n", __builtin_popcountll((bitmask[x] | bitmask[y])));
        }
    }
	
	return 0;
}
