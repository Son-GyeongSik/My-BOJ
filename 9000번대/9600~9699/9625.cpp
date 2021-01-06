#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int arr[5000];
int main()
{
	int a=1;
	int b=0;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int tmp;
		tmp=a;
		a=b;
		b=tmp+b;
	}
	cout<<a<<" "<<b<<endl;
}
