#include <stdio.h>
using namespace std;
int d[1000001];
int main()
{
	int n;
	scanf("%d", &n);
	d[2] = 1;
	d[3] = 1;
	for (int i = 4; i <= n; i++)
	{
		int minn = 999999999;
		if (i % 2 == 0)
			if (minn > d[i / 2])
				minn = d[i / 2];
		if (i % 3 == 0)
			if (minn > d[i / 3])
				minn = d[i / 3];
		if (minn > d[i - 1])
			minn = d[i - 1];
		d[i] = minn + 1;
	}
	printf("%d\n", d[n]);
}