#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[10];
int main()
{
	int a;
	cin>>a;
	if(a==0)
	{
		cout<<"1"<<endl;
		return 0;
	}
	while(a>0)
	{
		arr[a%10]++;
		a/=10;
	}
	arr[6]=((arr[6]+arr[9])/2)+((arr[6]+arr[9])%2);
	arr[9]=arr[6];
	int maxx=0;
	for(int i=0; i<10; i++)
	{
		if(maxx<arr[i])
			maxx=arr[i];
	}
	cout<<maxx<<endl;
	return 0;
}	
