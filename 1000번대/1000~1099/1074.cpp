#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	long long res = 0;

	while (n > 1) {
		if (r < pow(2, n-1)) {
			if (c < pow(2, n-1)) {

			}
			else {
				res += pow(pow(2, n-1),2);
				c -= pow(2, n-1);
			}
		}
		else {
			if (c < pow(2, n-1)) {
				res += 2 * pow(pow(2, n-1),2);
				r -= pow(2, n - 1);
			}
			else {
				res += 3 * pow(pow(2, n-1),2);
				r -= pow(2, n - 1);
				c -= pow(2, n - 1);
			}
		}
		n--;
	}
	cout << res + (2*r) + c << endl;
}