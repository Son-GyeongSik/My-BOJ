#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,t;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int score[1000] = { 0, }, cnt = 0;
		double avg = 0.0;
		scanf("%d", &t);
		for (int j = 0; j < t; j++)
		{
			scanf("%d", &score[j]);
			avg += (double)score[j];
		}
		avg /= t;
		for (int j = 0; j < t; j++)
		{
			if (score[j] > avg)
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt / t * 100);
	}
	return 0;
}