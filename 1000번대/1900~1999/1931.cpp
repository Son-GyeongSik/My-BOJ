#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct talk{
    long long s,e;
}t[100100];
bool cmp(talk a, talk b)
{
    if(a.e<b.e)
        return true;
    if(a.e==b.e)
    {
        if(a.s<b.s)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        scanf("%lld %lld",&t[i].s,&t[i].e);
    sort(t+1,t+n+1,cmp);
    long long bef=0,cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(t[i].s>=bef)
        {
            cnt++;
            bef=t[i].e;
        }
    }
    cout<<cnt<<endl;
    return 0;
}