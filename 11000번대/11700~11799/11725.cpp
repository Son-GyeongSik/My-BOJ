#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
vector<int> v[100001];
int arr[100001];
int visit[100001];
void dfs(int now,int p)
{
	visit[now]=1;
	if(now!=1)
		arr[now]=p;
	for(int i=0; i<v[now].size(); i++)
	{
		if(visit[v[now][i]]==0)
			dfs(v[now][i],now);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<n; i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1,0);
	for(int i=2; i<=n; i++)
		printf("%d\n",arr[i]);
}
