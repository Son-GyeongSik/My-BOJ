#include <iostream>
#include <stdio.h>
using namespace std;
int data[101][101],n;
unsigned long long check[101][101];
unsigned long long solve(int x, int y)
{
    if(check[x][y]!=0)
        return check[x][y];
    if(x==n && y==n)
        return 1;
    if(data[x][y]==0)
        return 0;
    if(x+data[x][y]<=n)
        check[x][y]+=solve(x+data[x][y],y);
    if(y+data[x][y]<=n)
        check[x][y]+=solve(x,y+data[x][y]);
    return check[x][y];
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&data[i][j]);
    cout<<solve(1,1)<<endl;
    return 0;
}
