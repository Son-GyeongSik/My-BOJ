#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int d[1001];
int main()
{
    d[1]=1;
    for(int i=2; i<=1000; i++)
    {
        if(d[i]==1)
            continue;
        int a=i+i;
        while(a<=1000)
        {
            d[a]=1;
            a+=i;
        }
    }
    int n;
    int cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int q;
        cin>>q;
        if(!d[q])
            cnt++;
    }
    cout<<cnt<<endl;
}
