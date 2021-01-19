#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int minn=0,cnt=0;
	for(int i=a; i<=b; i++)
	{
		int s=(int)sqrt(i);
		if(s*s==i)
		{
			cnt+=i;
			if(minn==0)
				minn=i;
		}
	}
	if(minn==0)
		cout<<"-1"<<endl;
	else
	{
		cout<<cnt<<endl<<minn<<endl;
	}
	return 0;
}
