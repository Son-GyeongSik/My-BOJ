#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n>>f;
    n/=100;
    n*=100;
    for(int i=0; i<100; i++)
    {
        if((n+i)%f==0)
        {
            printf("%02d\n",i);
            break;
        }
    }
    return 0;
}
