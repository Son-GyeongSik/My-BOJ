#include <iostream>
using namespace std;
int dp[2][50];
int main()
{
    dp[0][0]=1;
    dp[1][1]=1;
    for(int i=2; i<50; i++)
    {
        dp[0][i]=dp[0][i-1]+dp[0][i-2];
        dp[1][i]=dp[1][i-1]+dp[1][i-2];
    }
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        cout<<dp[0][a]<<" "<<dp[1][a]<<endl;
    }
    return 0;
}
