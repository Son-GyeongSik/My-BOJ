#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int d[100];
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int f=k%n;
        if(f==0)
            f=n;
        int a=((k-1)/n)+1;
        printf("%d%02d\n",f,a);
    }
    return 0;
}
