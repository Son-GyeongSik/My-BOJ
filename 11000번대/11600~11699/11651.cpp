#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct{
	int x;
	int y;
}axis;
axis ax[100000];
bool cmp(axis a, axis b)
{
	if(a.y<b.y)
		return true;
	else if(a.y==b.y)
	{
		if(a.x<b.x)
			return true;
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		scanf("%d %d",&ax[i].x,&ax[i].y);
	sort(ax,ax+n,cmp);
	for(int i=0; i<n; i++)
		printf("%d %d\n",ax[i].x,ax[i].y);
	return 0;
}	
