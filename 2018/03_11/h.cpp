// Author : Pedro Henrique

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){ 
		int val[10002];
		int A[N];
		memset(val,0,sizeof(val));
		for(int i=0;i<M;i++)
			cin >> A[i],val[A[i]]++;
		if(N==M)
			cout << "*\n";
		else{
			for(int i=1;i<=N;i++)
				if(val[i]==0)	
					cout << i << " ";
			cout << '\n';
		}
	}
}
