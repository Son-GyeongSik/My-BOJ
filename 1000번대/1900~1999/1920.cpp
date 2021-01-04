#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int arr[100001];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1);
    int m,k;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int mid=n/2;
        int left=1;
        int right=n;
        scanf("%d",&k);
        while(left<=right)
        {
            if(left==right && arr[left]==k)
            {
                printf("1\n");
                break;
            }
            else if(left==right && arr[left]!=k)
            {
                printf("0\n");
                break;
            }
            
            if(k<arr[mid])
            {
                right=mid-1;
                mid=(right+left)/2;
                continue;
            }
            else if(k>arr[mid])
            {
                left=mid+1;
                mid=(right+left)/2;
                continue;
            }
            else
            {
                printf("1\n");
                break;
            }
        }
        if(left>right)
            printf("0\n");
    }
}
