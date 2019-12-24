#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
using namespace std;
int main()
{
	int max_dp[3], maxbef_dp[3], min_dp[3], minbef_dp[3];
	int in[3];
	int n;
	cin >> n;
	cin >> in[0] >> in[1] >> in[2];
	for (int i = 0; i < 3; i++)
	{
		maxbef_dp[i] = in[i];
		max_dp[i] = in[i];
		minbef_dp[i] = in[i];
		min_dp[i] = in[i];
	}
	for (int i = 2; i <= n; i++)
	{
		cin >> in[0] >> in[1] >> in[2];
		max_dp[0] = in[0] + (maxbef_dp[0] > maxbef_dp[1] ? maxbef_dp[0] : maxbef_dp[1]);
		max_dp[2] = in[2] + (maxbef_dp[2] > maxbef_dp[1] ? maxbef_dp[2] : maxbef_dp[1]);
		min_dp[0] = in[0] + (minbef_dp[0] < minbef_dp[1] ? minbef_dp[0] : minbef_dp[1]);
		min_dp[2] = in[2] + (minbef_dp[2] < minbef_dp[1] ? minbef_dp[2] : minbef_dp[1]);
		sort(maxbef_dp, maxbef_dp + 3);
		sort(minbef_dp, minbef_dp + 3);
		max_dp[1] = in[1] + maxbef_dp[2];
		min_dp[1] = in[1] + minbef_dp[0];
		for (int j = 0; j < 3; j++)
		{
			maxbef_dp[j] = max_dp[j];
			minbef_dp[j] = min_dp[j];
		}
	}
	sort(max_dp, max_dp + 3);
	sort(min_dp, min_dp + 3);
	cout << max_dp[2] << " " << min_dp[0] << endl;
}