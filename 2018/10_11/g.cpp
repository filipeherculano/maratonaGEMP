// Author : Matheus Monteiro

#include <bits/stdc++.h>
using namespace std;
#define mt make_tuple
const int OO = 0x3f3f3f3f;

int n, m;
vector<tuple<int, int, int>> G;
int dist[110], sumDist[110];

void bellmanFord(int u)
{
    memset(dist, 63, sizeof(dist));
    dist[u] = 0;
    for(int i = 1; i < n; i++)
        for(auto t : G)
        {
            int u, v, w;
            tie(u, v, w) = t;
            if(dist[v] > dist[u] + w)
                dist[v] = dist[u] + w;
        }
}

int main()
{
    while(cin >> n >> m and (n or m))
    {
        while(m--)
        {
            int u, v, w;
            cin >> u >> v >> w;
            G.push_back(mt(u-1, v-1, w));
            G.push_back(mt(v-1, u-1, w));
        }
        memset(sumDist, 0, sizeof(sumDist));
        int minD = INT_MAX;
        for(int i = 1; i <= n; i++)
        {
            bellmanFord(i-1);
            for(int j = 0; j < n; j++)
                sumDist[i] += dist[j];
            minD = min(minD, sumDist[i]);
        }
        for(int i = 1; i <= n; i++)
            if(sumDist[i] == minD) cout << i << ' ';
        cout << '\n';
        G.clear();
    }

    return 0;
}
