#include <iostream>
#include <algorithm>
using namespace std;
int n,a[101],maxx;
struct wire{
    int s,e;
}w[101];
bool cmp(wire a, wire b)
{
    return a.s<b.s;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>w[i].s>>w[i].e;
    sort(w+1,w+n+1,cmp);
    a[1]=1;
    for(int i=2; i<=n; i++)
    {
        for(int j=i-1; j>=1; j--)
        {
            if(w[j].e<w[i].e && a[j]+1>a[i])
                a[i]=a[j]+1;
        }
        if(a[i]==0)
            a[i]=1;
        if(maxx<a[i])
            maxx=a[i];
    }
    cout<<n-maxx<<endl;
    return 0;
}
