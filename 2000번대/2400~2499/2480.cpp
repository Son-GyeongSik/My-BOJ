#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	if(arr[0]==arr[1] && arr[1]==arr[2])
		cout<<10000+(arr[0]*1000)<<endl;
	else if(arr[0]==arr[1])
		cout<<1000+(arr[0]*100)<<endl;
	else if(arr[1]==arr[2])
		cout<<1000+(arr[1]*100)<<endl;
	else
		cout<<arr[2]*100<<endl;
	return 0;
}	
