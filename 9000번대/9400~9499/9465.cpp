#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[2][100000];
int n,t;
int main()
{
    cin>>t;
    for(int q=0; q<t; q++)
    {
        cin>>n;
        int maxx=-10;
        for(int i=0; i<2; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&arr[i][j]);
        int dp[2][100000];
        dp[0][0]=arr[0][0];
        dp[1][0]=arr[1][0];
        maxx=dp[1][0];
        if(dp[0][0]>dp[1][0])
            maxx=dp[0][0];
        for(int i=1; i<n; i++)
        {
            dp[0][i]=arr[0][i]+dp[1][i-1];
            dp[1][i]=arr[1][i]+dp[0][i-1];
            if(i>=2)
            {
                if(dp[0][i]<arr[0][i]+dp[0][i-2])
                    dp[0][i]=arr[0][i]+dp[0][i-2];
                if(dp[0][i]<arr[0][i]+dp[1][i-2])
                    dp[0][i]=arr[0][i]+dp[1][i-2];
                if(dp[1][i]<arr[1][i]+dp[0][i-2])
                    dp[1][i]=arr[1][i]+dp[0][i-2];
                if(dp[1][i]<arr[1][i]+dp[1][i-2])
                    dp[1][i]=arr[1][i]+dp[1][i-2];
            }
            if(maxx<dp[0][i])
                maxx=dp[0][i];
            if(maxx<dp[1][i])
                maxx=dp[1][i];
        }
        cout<<maxx<<endl;
    }
}
