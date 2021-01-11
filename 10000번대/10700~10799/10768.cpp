#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if(a>2)
		cout<<"After"<<endl;
	else if(a<2)
		cout<<"Before"<<endl;
	else
	{
		if(b>18)
			cout<<"After"<<endl;
		else if(b<18)
			cout<<"Before"<<endl;
		else
			cout<<"Special"<<endl;
	}
	return 0;
}
