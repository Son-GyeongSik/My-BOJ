#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int d[100];
int main()
{
    int n,m;
    int maxx=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>d[i];
    for(int i=2; i<n; i++)
    {
        for(int j=1; j<i; j++)
        {
            for(int k=0; k<j; k++)
            {
                int a=d[i]+d[j]+d[k];
                if(a<=m && a>maxx)
                    maxx=a;
            }
        }
    }
    cout<<maxx<<endl;
}
