#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int idx, n, max, arr[10];
	max = -100;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}
	printf("%d\n%d\n", max, idx);
	return 0;
}