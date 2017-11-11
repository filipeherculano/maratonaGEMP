// Author : Sidney Xavier

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int v[1003];
    while(n--)
    {
        cin >> m;
        double p = 0.0, a;
        for(int i = 0; i < m; i++)
        {
            cin >> v[i];
            p += v[i];
        }
        p /= m;
        int c = 0;
        for(int i = 0; i < m; i++)
            if(v[i] > p)
                c++;
        cout << fixed << setprecision(3) << (c * 100.0) / m << "%\n";
    }
    
	return 0;
}
