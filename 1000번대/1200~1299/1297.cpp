#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
	double a,b,c;
	double x;
	cin>>a>>b>>c;
	x=(a*a)/((b*b)+(c*c));
	cout<<(int)(sqrt(x)*b)<<" "<<(int)(sqrt(x)*c)<<endl;
	return 0;
}
