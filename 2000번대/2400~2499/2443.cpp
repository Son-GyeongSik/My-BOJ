#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=n-i; j++)
			cout<<" ";
		for(int j=1; j<=(i*2-1); j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}
