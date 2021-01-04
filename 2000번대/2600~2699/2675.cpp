#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int r;
        char arr[20];
        cin>>r>>arr;
        for(int j=0; j<strlen(arr); j++)
        {
            for(int k=0; k<r; k++)
                cout<<arr[j];
        }
        cout<<endl;
    }
    return 0;
}
