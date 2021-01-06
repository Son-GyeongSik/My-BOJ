#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int arr[9];
int cnt=0;
void bt(int depth)
{
    if(depth>n)
        return;
    cnt++;
    arr[cnt]=depth;
    if(cnt==m)
    {
        for(int i=1; i<=m; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    else
        bt(depth+1);
    cnt--;
    bt(depth+1);
    return;
}
int main()
{
    cin>>n>>m;
    bt(1);
    return 0;
}
