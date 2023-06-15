#include<iostream>
#include<stdio.h>
using namespace std;

int arr[1025][1025];
int dp[1025][1025];

int main()
{
    int n, m;
    scanf("%d %d",&n, &m);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d ",&arr[i][j]);
            if(i==1)
                dp[1][j]=(arr[1][j] + dp[1][j-1]);
            else if(j==1)
                dp[i][1]=(arr[i][1] + dp[i-1][1]);
            else
                dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];  
        }
    }

    for(int i=0; i<m; i++)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        int ans = dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1];
        printf("%d\n", ans);
    }
    return 0;
}