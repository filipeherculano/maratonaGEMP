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

int n;
int arr[MAX];

int bubbleSort()
{
    bool ordenado = false;
    int ans = 0;
    while(!ordenado)
    {
        ordenado = true;
        REP(i, n-1)
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                ordenado = false;
                ans++;
            }
    }
    return ans;
}

int main()
{
    int t;

    cin >> t;
    while(t--)
    {
	    cin >> n;
	    REP(i, n) cin >> arr[i];
	    cout << "Optimal train swapping takes " << bubbleSort() << " swaps.\n";
	}

	return 0;
}
