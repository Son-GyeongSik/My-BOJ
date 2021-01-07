#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int a,b;
		cin>>a>>b;
		if(b<a)
		{
			int tmp=a;
			a=b;
			b=tmp;
		}
		int c=b;
		while(1)
		{
			if(c%a==0)
			{
				cout<<c<<endl;
				break;
			}
			c+=b;
		}
	}
	return 0;
}	
