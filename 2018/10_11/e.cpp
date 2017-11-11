// Author : Matheus Monteiro

#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
#define bug(x) cout << #x << ' ' << x << '\n';
int med;
priority_queue<int, vector<int>, greater<int>> rig;
priority_queue<int> lef;

void update(int x)
{
    if(x > med)
    {
        rig.push(x);
        if((rig.size()+lef.size())%2 == 0 and rig.size() > lef.size())
        {
            lef.push(med);
            med = rig.top();
            rig.pop();
        }
    }
    else
    {
        lef.push(x);
        if((rig.size()+lef.size())%2 == 0 and rig.size() < lef.size())
        {
            rig.push(med);
            med = lef.top();
            lef.pop();
        }
        else if((rig.size()+lef.size())%2 != 0 and rig.size() < lef.size())
        {
            rig.push(med);
            med = lef.top();
            lef.pop();
        }
    }
}

int main()
{
    int n, aux, sum;
    
    scanf("%d", &n);
    scanf("%d", &med);
    sum = med;
    //bug(med);
    while(--n)
    {
        scanf("%d", &aux);
        update(aux);
        sum = ((sum%MOD) + (med%MOD))%MOD;
        //bug(med);
    }
    //cout << '\n';   
    cout << sum%MOD << '\n';

    return 0;
}
