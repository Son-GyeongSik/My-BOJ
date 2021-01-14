#include <iostream>
#include <queue>
#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1000][1000];
int dp[1000][1000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%1d",&arr[i][j]);
	for(int i=0; i<n; i++)
		dp[i][0]=arr[i][0];
	for(int i=0; i<m; i++)
		dp[0][i]=arr[0][i];
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<m; j++)
		{
			if(arr[i][j]==0)
			{
				dp[i][j]=0;
				continue;
			}
			if(dp[i-1][j-1]<=dp[i-1][j] && dp[i-1][j-1]<=dp[i][j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else if(dp[i-1][j]<=dp[i][j-1] && dp[i-1][j]<=dp[i-1][j-1])
				dp[i][j]=dp[i-1][j]+1;
			else
				dp[i][j]=dp[i][j-1]+1;
		}
	}
	int maxx=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(maxx<dp[i][j])
				maxx=dp[i][j];
	cout<<maxx*maxx<<endl;
    return 0;
}
