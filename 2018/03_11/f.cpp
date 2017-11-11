// Author : Pedro Henrique

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a;
	cin >> N >> M;
	priority_queue< pair<int,int> > pq;
	for(int i=1;i<=N;i++){
		int soma=0;
		for(int j=0;j<M;j++)
			cin >> a,soma+=a;
		pq.push(make_pair(-soma,i));
	}
	for(int i=0;i<3;i++){
		pair<int,int> k=pq.top();
		pq.pop();
		cout << k.second << '\n';
	}
}
