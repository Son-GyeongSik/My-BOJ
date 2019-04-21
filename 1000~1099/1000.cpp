#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int abs(int a)
{
    if(a<0)
        return -a;
    return a;
}
short arr[10000001];
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;
}
