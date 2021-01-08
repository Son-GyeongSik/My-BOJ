#include <iostream>
using namespace std;

int main() {
	int t;
	int a,b,c,d;
	int x,y;
	cin>>t;
	cin>>a>>b>>c>>d;
	if(a%c!=0)
		x=(a/c)+1;
	else
		x=a/c;
	if(b%d!=0)
		y=(b/d)+1;
	else
		y=b/d;
	if(x>y)
		cout<<t-x<<endl;
	else
		cout<<t-y<<endl;
	return 0;
}
