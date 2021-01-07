#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int arr[2][51];
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>arr[0][i]>>arr[1][i];
	for(int i=1; i<=n; i++)
	{
		int cnt=0;
		for(int j=1; j<=n; j++)
		{
			if(arr[0][i]<arr[0][j] && arr[1][i]<arr[1][j])
				cnt++;
		}
		cout<<cnt+1<<" ";
	}
	cout<<endl;
	return 0;
}	
