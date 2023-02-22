#include <iostream>
using namespace std;
int ans[1101];
int maxx = 10000000;
int main()
{
	int n, k;
	int price[21];
	int value[21];
	cin >> k >> n;
	for (int i = 1; i <= n; i++)
		cin >> price[i] >> value[i];
	for (int i = 1; i <= k + 100; i++)
		ans[i] = 10000000;
	for (int i = 1; i <= k + 100; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i - value[j] < 0)
				continue;
			if (ans[i] > ans[i - value[j]] + price[j])
				ans[i] = ans[i - value[j]] + price[j];
			if (i >= k && maxx > ans[i])
				maxx = ans[i];
		}
	}
	cout << maxx << endl;
}