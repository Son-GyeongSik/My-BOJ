#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int a,b,c=0,d=0;
	cin>>a>>b;
	while(a>0)
	{
		c*=10;
		c+=a%10;
		a/=10;
	}
	while(b>0)
	{
		d*=10;
		d+=b%10;
		b/=10;
	}
	if(c>d)
		cout<<c<<endl;
	else
		cout<<d<<endl;
	return 0;
}
