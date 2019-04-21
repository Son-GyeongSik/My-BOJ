#include <iostream>
#include <algorithm>
using namespace std;
int s[51],ea[51];
int n,m,cnt;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        cin>>s[i]>>ea[i];
    sort(s+1,s+m+1);
    sort(ea+1,ea+m+1);
    if(ea[1]*6<s[1])
    {
        cout<<ea[1]*n<<endl;
        return 0;
    }
    else
    {
        if(n>=6)
        {
            cnt+=s[1]*(n/6);
            n-=(n/6)*6;
        }
        if(n>0 && n<6)
        {
            if(ea[1]*n<s[1])
                cnt+=ea[1]*n;
            else
                cnt+=s[1];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
