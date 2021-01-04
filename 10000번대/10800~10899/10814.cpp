#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
    int age;
    char name[110];
    int idx;
}ar;
ar arr[100100];
bool cmp(ar a, ar b)
{
    if(a.age<b.age)
        return true;
    else if(a.age==b.age)
    {
        if(a.idx<b.idx)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%d %s",&arr[i].age,arr[i].name);
        arr[i].idx=i;
    }
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++)
        printf("%d %s\n",arr[i].age,arr[i].name);
    return 0;
}
