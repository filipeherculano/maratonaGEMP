// Author : Matheus Monteiro

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a, b;
    
    cin >> n;    
    cin >> a >> b;
    int p[4] = {0, 0, 0, 0};
    int c = 0;
    bool fl = false;
    for(int i = 0; i < n and !fl; i++)
    {
        if(!fl and a[i] == 'o') p[0]++;
        else if(!fl) p[1]++;
        c++;
        if(p[0] > n-p[3] or p[2] > n-p[1])
        {
            fl = true;
            continue;
        }
        if(!fl and b[i] == 'o') p[2]++;
        else if(!fl) p[3]++;
        c++;
        if(p[0] > n-p[3]  or p[2] > n-p[1])
        {
            fl = true;
            continue;
        }
    }
    if(fl)
        cout << c << '\n';
    else
        cout << "Empate\n";
    
    return 0;
}
