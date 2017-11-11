// Author : Lamartine Cabral

//#include <bits/stdc++.h>
//*
#include <unordered_map>
#include <unordered_set>
#include <functional> //greater
#include <algorithm> //sort
#include <iostream>
#include <utility> //pair
#include <sstream>
#include <cstring> //memset
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype> //isaplha, tolower
#include <queue>
#include <stack>
#include <array>
#include <cmath> //sqrt, sin
#include <tuple>
#include <list>
#include <ctime>
#include <map>
#include <set>
//*/

#define ll long long int
#define var int
#define vi vector<var>
#define pii pair<var,var>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define all(X) (X).begin(),(X).end()
#define fori(i,ini,lim) for(int (i) = int(ini); (i) < int(lim); (i)++)
#define ford(i,ini,lim) for(int (i) = int(ini); (i) >= int(lim); (i)--)
#define SZ 100010
#define MAXN 18
const var INF = 0x3f3f3f3f; //3f3f3f3f;
using namespace std;

ostream &operator<<(ostream &os, const vi &v){ 
	os<<"{"; for(int i=0; i<v.size(); i++){ if(i) os<<", "; os<<v[i]; } os<<"}"; return os; }
ostream &operator<<(ostream &os, const pii &p) { return os << " (" << p.fi << "," << p.se << ")"; }

int a,b,k,l,m,n,p,q,r,t,x,y,z;
char s[90];

struct trie{
    trie* child[27];
	int n;
	int filhos;
};

trie* getnode(){
    trie* node = (trie*)malloc(sizeof(trie));
	node->n = 0;
	node->filhos = 0;
    for(int i=0; i<26; i++) node->child[i] = NULL;
    return node;
}

void update(trie* raiz){
    trie* atual = raiz;
    for(int i=0; s[i]; i++){
        int index = s[i]-'a';
		atual->n++;
		if(atual->child[index] == NULL){
			atual->child[index] = getnode();
			atual->filhos++;
		}
        atual = atual->child[index];
	}
	if(atual->child[26] == NULL){
		atual->child[26] = getnode();
		atual->n++;
	}
	atual->filhos++;
	atual = atual->child[26];
	atual->n++;
}

int cont;
int soma;

void dfs(trie* no, int x){
	if(no->n == 1){
		cont++;
		soma += x;
		return;
	}
	if(no->filhos == 1) x--;
	
	for(int i=0; i<26; i++) if(no->child[i] != NULL){
		dfs(no->child[i], x+1);
	}
	if(no->child[26] != NULL){
		cont++;
		soma += x;
		return;
	}
}

int main(){
	cerr<<"go"<<endl;
	
	while(cin>>n){
		trie* raiz = getnode();
		while(n--){
			scanf("%s", s);
			update(raiz);
		}
		cont=0; soma=0;
		for(int i=0; i<26; i++) if(raiz->child[i] != NULL){
			dfs(raiz->child[i], 1);
		}
		if(raiz->child[26] != NULL){
			cont++;
			soma += 1;
		}
		printf("%.2f\n", (0.0+soma)/(0.0+cont) );
	}
	
	return 0;
}
