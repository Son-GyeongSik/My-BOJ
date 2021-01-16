#include <iostream>
using namespace std;
int dp[2001][2001];
int main() {
	int n;
	int arr[2001];
	cin>>n;
	for(int i=1; i<=n; i++)
		scanf("%d",&arr[i]);
	for(int i=1; i<=n; i++)
		dp[i][i]=1;
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<=n-i+1; j++)
		{
			int s,e;
			s=j;
			e=j+i-1;
			if(i%2==0)
			{
				if(s+1==e && arr[s]==arr[e])
					dp[s][e]=1;
				else if(s+1<e)
				{
					if(arr[s]==arr[e] && dp[s+1][e-1]==1)
						dp[s][e]=1;
				}
			}
			else
			{
				if(arr[s]==arr[e] && dp[s+1][e-1]==1)
					dp[s][e]=1;
			}
		}
	}
	int m;
	cin>>m;
	for(int i=1; i<=m; i++)
	{
		int s,e;
		scanf("%d %d",&s,&e);
		printf("%d\n",dp[s][e]);
	}
	return 0;
}
