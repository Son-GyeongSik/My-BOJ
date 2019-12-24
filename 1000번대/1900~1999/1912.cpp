#include <iostream>
#include <stdio.h>
using namespace std;
long long n, arr[100001],maxx=-999999999, dat[100001],t;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        scanf("%lld",&arr[i]);
    dat[1]=arr[1];
    for(int i=2; i<=n; i++)
    {
        dat[i]=arr[i];
        if(dat[i]<dat[i-1]+arr[i])
            dat[i]=dat[i-1]+arr[i];
    }
    for(int i=1; i<=n; i++)
        if(dat[i]>maxx)
            maxx=dat[i];
    cout<<maxx<<endl;
    return 0;
}
