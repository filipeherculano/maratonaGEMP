// Author : Matheus Monteiro

#include <bits/stdc++.h>
#define se second
#define fi first
using namespace std;

int dx[] = {INT_MAX, 0, 0, 1, -1};
int dy[] = {INT_MAX, 1, -1, 0, 0};

int main()
{   
    int n, m, p, a, b;

    cin >> n >> m >> p;
    
    pair<int, int> pa = {1, 1}, pb = {n, m};
    bool fl = 0;
    int s = 1;
    while(p--)
    {
        cin >> a >> b;
        
        pa.fi += dx[a];
        pa.se += dy[a];
        pb.fi += dx[b];
        pb.se += dy[b];

        if(pa.fi == pb.fi and pa.se == pb.se and !fl)
            cout << "Encontraram-se na posicao (" << pa.fi << ',' << pa.se << ") no passo " << s << '\n', fl = 1;     
        bool ok1 = (pa.fi < 1 or pa.se < 1 or pa.fi > n or pa.se > m);
        bool ok2 = (pb.fi < 1 or pb.se < 1 or pb.fi > n or pb.se > m);
        if(ok1 and ok2 and !fl)
            cout << "PA saiu na posicao (" << pa.fi << ',' << pa.se << ") no passo " << s << '\n', fl = 1;
        else if(ok1 and !ok2 and !fl)
            cout << "PA saiu na posicao (" << pa.fi << ',' << pa.se << ") no passo " << s << '\n', fl = 1;
        else if(!ok1 and ok2 and !fl)
            cout << "PB saiu na posicao (" << pb.fi << ',' << pb.se << ") no passo " << s << '\n', fl = 1;
            
        s++;
    }
    if(!fl) 
        cout << "Nao se encontraram\n";

    return 0;
}
