#include <iostream>
#include <algorithm>
using namespace std;
bool cmp2(int a, int b)
{
    return a>b;
}
int a[51],b[51],n;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1,cmp2);
    int cnt=0;
    for(int i=1; i<=n; i++)
        cnt+=(a[i]*b[i]);
    cout << cnt << endl;
    return 0;
}
