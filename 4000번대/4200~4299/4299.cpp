#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if(b>a || (a+b)%2!=0)
		cout<<-1<<endl;
	else
		cout<<(a+b)/2<<" "<<(a-b)/2<<endl;
	return 0;
}
