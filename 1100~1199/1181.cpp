#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct cc{
    int len,f=0;
    char a[51];
}c[20001];
bool cmp(cc a, cc b)
{
    if(a.len<b.len)
        return true;
    else if(a.len==b.len)
    {
        int i=0;
        while(a.a[i]!='\0')
        {
            if(a.a[i]<b.a[i])
                return true;
            else if(a.a[i]>b.a[i])
                return false;
            i++;
        }
        if(a.a[i]=='\0')
        {
            a.f=1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>c[i].a;
        c[i].len=strlen(c[i].a);
    }
    sort(c+1,c+n+1,cmp);
    for(int i=1; i<=n; i++)
    {
        if(!strcmp(c[i].a,c[i-1].a))
            continue;
        cout<<c[i].a<<endl;
    }
    return 0;
}