#include <iostream>
#include <stdio.h>
using namespace std;
int arr[501][501],ans[501][501];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            scanf("%d",&arr[i][j]);
    }
    ans[1][1]=arr[1][1];
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            ans[i][j]=arr[i][j]+max(ans[i-1][j-1],ans[i-1][j]);
    }
    int maxx=-1;
    for(int i=1; i<=n; i++)
    {
        if(maxx<ans[n][i])
            maxx=ans[n][i];
    }
    cout<<maxx<<endl;
    return 0;
}
