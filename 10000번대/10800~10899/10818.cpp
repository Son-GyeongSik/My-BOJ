#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int min, max;
	int n,a;
	min = 2000000;
	max = -2000000;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	printf("%d %d\n", min, max);
	return 0;
}