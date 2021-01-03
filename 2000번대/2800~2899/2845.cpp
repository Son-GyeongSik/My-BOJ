#include <stdio.h>

int main() {
    int a,b;
    int arr[5];
    scanf("%d %d",&a,&b);
    int p=a*b;
    for(int i=0; i<5; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<5; i++)
        printf("%d ",arr[i]-p);
	return 0;
}