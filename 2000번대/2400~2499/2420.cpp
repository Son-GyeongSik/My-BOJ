#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	long long c=b-a;
	if(c<0)
		c*=-1;
	cout<<c<<endl;
	return 0;
}	
