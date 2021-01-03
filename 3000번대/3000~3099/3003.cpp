#include <stdio.h>

int main() {
    int arr1[6]={1,1,2,2,2,8};
    int arr2[6];
    for(int i=0; i<6; i++)
        scanf("%d",&arr2[i]);
    for(int i=0; i<6; i++)
        printf("%d ",arr1[i]-arr2[i]);
    return 0;
}