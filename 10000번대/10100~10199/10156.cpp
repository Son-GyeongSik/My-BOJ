#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	a*=b;
	if(a>c)
		cout<<a-c<<endl;
	else
		cout<<"0"<<endl;
	return 0;
}	
