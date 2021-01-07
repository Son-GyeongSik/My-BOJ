#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,d,e;
	int ans=0;
	cin>>a>>b>>c>>d>>e;
	if(a<b && a<c)
		ans+=a;
	else if(b<a && b<c)
		ans+=b;
	else
		ans+=c;
	if(d<e)
		ans+=d;
	else
		ans+=e;
	cout<<ans-50<<endl;
}	
