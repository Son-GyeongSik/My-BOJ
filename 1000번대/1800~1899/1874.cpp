#include <iostream>
#include <stdio.h>
using namespace std;
int ans[100001],st[100001],ans_cnt,st_cnt,n,q;
char a[200001];
int main()
{
    int i=1;
    cin>>n;
    for(int i=n; i>=1; i--)
        scanf("%d",&ans[i]);
    ans_cnt=n;
    while(1)
    {
        if(ans_cnt==0)
            break;
        q++;
        if(st[st_cnt]>ans[ans_cnt])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(st[st_cnt]==ans[ans_cnt])
        {
            a[q]='-';
            st_cnt--;
            ans_cnt--;
        }
        else
        {
            a[q]='+';
            st_cnt++;
            st[st_cnt]=i;
            i++;
        }
    }
    for(int i=1; i<=q; i++)
        printf("%c\n",a[i]);
    return 0;
}
