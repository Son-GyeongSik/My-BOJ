#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long arr[91];
	arr[1]=1;
	int n;
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout<<arr[n]<<endl;
	return 0;
}	
