#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	double res;
	res=a*2;
	res+=2*(3.141592)*b;
	printf("%.6f\n",res);
	return 0;
}
