#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a;
    int cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%1d",&a);
        cnt+=a;
    }
    cout<<cnt<<endl;
}
