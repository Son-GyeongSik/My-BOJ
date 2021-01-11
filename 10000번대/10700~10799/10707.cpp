#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a;
	int b,c,d;
	int e;
	cin>>a;
	cin>>b>>c>>d;
	cin>>e;
	int re1,re2;
	re1=a*e;
	re2=b;
	if(c<e)
	{
		re2+=((e-c)*d);
	}
	if(re1>re2)
		cout<<re2<<endl;
	else
		cout<<re1<<endl;
	return 0;
}
