#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
int arr[1001][1001],ch[1001];
int n,m,k;
queue<int> q;
int dfs(int now)
{
    ch[now]=1;
    printf("%d ",now);
    for(int i=1; i<=n; i++)
    {
        if(arr[now][i]==1 && ch[i]!=1)
            dfs(i);
    }
}
void BFS(int v)
{
    q.push(v);
    ch[v]=1;
    while(!q.empty())
    {
        printf("%d ",q.front());
        for(int i=1; i<=n; i++)
        {
            if(arr[q.front()][i]==1 && ch[i]!=1)
            {
                q.push(i);
                ch[i]=1;
            }
        }
        q.pop();
    }
}
int main()
{
    cin>>n>>m>>k;
    for(int i=1; i<=m; i++)
    {
        int a, b;
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    dfs(k);
    cout<<endl;
    for(int i=1; i<=n; i++)
        ch[i]=0;
    BFS(k);
    return 0;
}