#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
char c[26];
int idx[26];
char ans[1000];
int n,cnt=1;
int solve(int alpha, int last)
{
    for(int i=last+alpha+1; i>last; i--)
    {
        if(i+alpha-(i-last-1)+i+1>n)
            continue;
        else if(i+alpha-(i-last-1)+i+1==n)
        {
            ans[i]=c[cnt];
            idx[cnt]=i;
            return 1;
        }
        ans[i]=c[cnt];
        idx[cnt]=i;
        cnt++;
        if(solve(alpha-(i-last-1)+i,i))
            return 1;
        ans[i]=0;
        cnt--;
    }
    return 0;
}
int main()
{
    cin>>n;
    if(n==1)
    {
        cout<<"A"<<endl;
        return 0;
    }
    ans[0]='A';
    ans[1]='B';
    idx[0]=1;
    if(n==3)
    {
        cout<<"ABB"<<endl;
        return 0;
    }
    for(int i=0; i<16; i++)
        c[i]='B'+i;
    if(!solve(1,1))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int cn=0;
    for(int i=0; i<n; i++)
    {
        if(ans[i]=='\0')
        {
            while(idx[cn]==0)
                cn++;
            idx[cn]--;
            ans[i]='B'+cn;
        }
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}