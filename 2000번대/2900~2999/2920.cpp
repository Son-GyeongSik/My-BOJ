#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[9], mode;
	scanf("%d", &arr[1]);
	if (arr[1] == 1)
		mode = 1;
	else if (arr[1] == 8)
		mode = 2;
	else
	{
		printf("mixed\n");
		return 0;
	}
	for (int i = 2; i <= 8; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == i && mode == 1)
			continue;
		else if (arr[i] == 9 - i && mode == 2)
			continue;
		else
		{
			printf("mixed\n");
			return 0;
		}
	}
	if (mode == 1)
		printf("ascending\n");
	else
		printf("descending\n");
	return 0;
}