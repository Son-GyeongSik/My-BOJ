#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int res=0;
	if(a<0)
	{
		res+=a*-1*c;
		res+=d;
		a=0;
	}
	res+=(b-a)*e;
	cout<<res<<endl;
	return 0;
}
