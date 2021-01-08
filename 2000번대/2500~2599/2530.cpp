#include <iostream>
using namespace std;

int main() {
	int h,m,s;
	int t;
	cin>>h>>m>>s;
	cin>>t;
	s+=t;
	m+=(s/60);
	s%=60;
	h+=(m/60);
	m%=60;
	h%=24;
	cout<<h<<" "<<m<<" "<<s<<endl;
	return 0;
}
