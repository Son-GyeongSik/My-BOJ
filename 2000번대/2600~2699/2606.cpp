#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[101][101];
int visit[101];
int cnt=-1;
void dfs(int now)
{
    cnt++;
    visit[now]=1;
    for(int i=1; i<=100; i++)
    {
        if(arr[now][i]==1 && visit[i]==0)
            dfs(i);
    }
    return;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    dfs(1);
    cout<<cnt<<endl;
}
