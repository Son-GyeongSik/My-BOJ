#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	int cnt=0;
	for(int i=0; i<5; i++)
	{
		cin>>a;
		if(a<40)
			a=40;
		cnt+=a;
	}
	cout<<cnt/5<<endl;
	return 0;
}
