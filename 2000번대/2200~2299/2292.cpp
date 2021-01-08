#include <iostream>
#include <string.h>
using namespace std;

int main() {
	long long a;
	cin>>a;
	long long t=1,n=1;
	while(n<a)
	{
		n+=(6*t);
		t++;
	}
	cout<<t<<endl;
	return 0;
}
