#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a+d>b+c)
		cout<<b+c<<endl;
	else
		cout<<a+d<<endl;
	return 0;
}
