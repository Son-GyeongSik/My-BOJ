#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int a;
	cin>>a;
	int c;
	if(a/1000==1)
		c=20;
	else if(a/100>0)
	{
		c=a/100;
		a%=100;
		if(a/10==0)
		{
			c*=10;
			c+=a%10;
		}
		else
			c+=10;
	}
	else
		c=(a/10)+(a%10);
	cout<<c<<endl;
	return 0;
}
