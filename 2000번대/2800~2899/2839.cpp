#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int arr[5000];
int main()
{
	arr[3]=1;
	arr[5]=1;
	int n;
	cin>>n;
	for(int i=6; i<=5000; i++)
	{
		int a=0,b=0;
		if(arr[i-3]!=0)
			a=arr[i-3]+1;
		if(arr[i-5]!=0)
			b=arr[i-5]+1;
		if(a==0 && b==0)
			continue;
		if(a!=0 && (a<=b || b==0))
			arr[i]=a;
		else
			arr[i]=b;
	}
	if(arr[n]==0)
		cout<<"-1"<<endl;
	else
		cout<<arr[n]<<endl;
    return 0;
}
