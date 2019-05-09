#include <iostream>
#include <algorithm>
typedef struct wow{
    int idx;
    int v;
};
bool cmp(wow a, wow b)
{
    if(a.v<b.v)
        return true;
    else if(a.v==b.v)
    {
        if(a.idx<b.idx)
            return true;
    }
    return false;
}
using namespace std;
int main()
{
    wow w[100];
    int id[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>w[i].v;
        w[i].idx=i;
    }
    sort(w,w+n,cmp);
    for(int i=0; i<n; i++)
        id[w[i].idx]=i;
    for(int i=0; i<n; i++)
        cout<<id[i]<<" ";
    return 0;
}
