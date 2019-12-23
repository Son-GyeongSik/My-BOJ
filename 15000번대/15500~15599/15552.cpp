#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}