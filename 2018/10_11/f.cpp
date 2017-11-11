// Author : Sidney Xavier

#include <bits/stdc++.h>

using namespace std;

struct node
{
    int v;
    node *left;
    node *right;
    node(int value)
    {
        v = value;
        left = right = NULL;
    }
};

void insert(node *root, int v)
{
    if(root == NULL) return;
    if(v > root->v)
    {
        if(root->right == NULL) root->right = new node(v);
        else insert(root->right, v);
    }
    else if(v < root->v)
    {
        if(root->left == NULL) root->left = new node(v);
        else insert(root->left, v);
    }
}

void bfs(node *root)
{
    queue<node*> fila;
    fila.push(root);
    bool fl = false;
    while(!fila.empty())
    {
        node *aux = fila.front();
        fila.pop();
        if(fl) cout << ' ';
        cout << aux->v;
        fl = true;
        if(aux->left != NULL)
            fila.push(aux->left);
        if(aux->right != NULL)
            fila.push(aux->right);
    }
}

int main()
{
    int n, m, a, x = 1;
    cin >> n;
    node *root;
    while(n--)
    {
        cin >> m;
        cin >> a;
        root = new node(a);
        while(--m)
        {
            cin >> a;
            insert(root, a);
        }
        cout << "Case " << x++ << ":\n";
        bfs(root);
        cout << "\n\n";
    }


	return 0;
}
