#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	if(t%10!=0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	int a=0,b=0,c=0;
	a=t/300;
	t%=300;
	b=t/60;
	t%=60;
	c=t/10;
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
