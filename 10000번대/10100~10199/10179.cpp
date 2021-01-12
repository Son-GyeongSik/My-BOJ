#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		double a;
		cin>>a;
		printf("$%.2f\n",a*0.8);
	}
	return 0;
}
