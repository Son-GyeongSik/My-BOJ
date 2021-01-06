#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int arr[9];
void bt(int depth, int cnt)
{
    if(depth>n)
        return;
    arr[cnt]=depth;
    if(cnt==m)
    {
        for(int i=1; i<=m; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    else
    {
        bt(depth,cnt+1);
    }
    bt(depth+1,cnt);
    return;
}
int main()
{
    cin>>n>>m;
    bt(1,1);
    return 0;
}
