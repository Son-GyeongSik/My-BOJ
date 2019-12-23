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
int main()
{
    char arr[8][8];
    int cnt=0;
    for(int i=0; i<8; i++)
        scanf("%s",arr[i]);
    for(int i=0; i<8; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<8; j+=2)
            {
                if(arr[i][j]=='F')
                    cnt++;
            }
        }
        else
        {
            for(int j=1; j<8; j+=2)
            {
                if(arr[i][j]=='F')
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
