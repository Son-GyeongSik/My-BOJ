#include <stdio.h>

int main() {
    int sum=0;
    int a;
    for(int i=0; i<4; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d\n%d",sum/60,sum%60);
    return 0;
}