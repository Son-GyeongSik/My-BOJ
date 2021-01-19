#include <iostream>
using namespace std;

int main() {
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int x,y;
	char week[8][4]={"","MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin>>x>>y;
	int a=0;
	for(int i=1; i<x; i++)
		a+=day[i];
	a+=y;
	a--;
	a%=7;
	a++;
	cout<<week[a]<<endl;
	return 0;
}
