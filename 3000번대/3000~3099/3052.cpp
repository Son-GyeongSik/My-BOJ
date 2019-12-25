#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[42] = { 0, }, n, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if (arr[n%42] == 0)
			cnt++;
		arr[n%42] = 1;
	}
	printf("%d\n", cnt);
	return 0;
}