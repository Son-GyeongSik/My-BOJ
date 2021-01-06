#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int visit[9];
int arr[9];
int inp[9];
void bt(int depth,int cnt)
{
    visit[depth]=1;
    arr[cnt]=inp[depth];
    if(cnt==m)
    {
        for(int i=1; i<=cnt; i++)
            printf("%d ",arr[i]);
        printf("\n");
        visit[depth]=0;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(visit[i]==0)
            bt(i,cnt+1);
    }
    visit[depth]=0;
    return;
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>inp[i];
    sort(inp+1,inp+n+1);
    for(int i=1; i<=n; i++)
        bt(i,1);
    return 0;
}
