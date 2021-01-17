#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int tot=0;
	int maxx=0;
	for(int i=1; i<=4; i++)
	{
		int a,b;
		cin>>a>>b;
		tot-=a;
		tot+=b;
		if(maxx<tot)
			maxx=tot;
	}
	cout<<maxx<<endl;
	return 0;
}
