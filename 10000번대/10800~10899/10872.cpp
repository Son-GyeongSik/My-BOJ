#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long n=1,i;
	int a;
	cin>>a;
	for(i=1; i<=a; i++)
		n*=i;
	cout<<n<<endl;
	return 0;
}
