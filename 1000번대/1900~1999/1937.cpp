#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[500][500],n;
int dp[500][500];
int dr[4]={0,0,1,-1};
int dc[4]={1,-1,0,0};
int maxx;
int dfs(int x,int y)
{
	dp[x][y]=1;
	for(int i=0; i<4; i++)
	{
		if(x+dr[i]>=0 && x+dr[i]<n && y+dc[i]>=0 && y+dc[i]<n && arr[x][y]>arr[x+dr[i]][y+dc[i]])
		{
			if(dp[x+dr[i]][y+dc[i]]!=0)
			{
				if(dp[x][y]<dp[x+dr[i]][y+dc[i]]+1)
					dp[x][y]=dp[x+dr[i]][y+dc[i]]+1;
			}
			else
			{
				int k=dfs(x+dr[i],y+dc[i]);
				if(k+1>dp[x][y])
					dp[x][y]=k+1;
			}
		}
	}
	return dp[x][y];
}
int main() {
	cin>>n;
	int maxx2=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>arr[i][j];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(dp[i][j]==0)
				dfs(i,j);
		}
	}
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(maxx2<dp[i][j])
				maxx2=dp[i][j];
	cout<<maxx2<<endl;
	return 0;
}
