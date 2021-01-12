#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	if(arr[0]+arr[1]+arr[2]>=100)
		cout<<"OK"<<endl;
	else
	{
		if(arr[0]<arr[1] && arr[0]<arr[2])
			cout<<"Soongsil"<<endl;
		else if(arr[1]<arr[0] && arr[1]<arr[2])
			cout<<"Korea"<<endl;
		else
			cout<<"Hanyang"<<endl;
	}
	return 0;
}
