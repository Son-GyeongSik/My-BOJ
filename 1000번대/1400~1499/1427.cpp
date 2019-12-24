#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
char a[11];
bool cmp(char a, char b)
{
    return a>b;
}
int main()
{
    cin>>a;
    sort(a,a+strlen(a),cmp);
    for(int i=0; i<strlen(a); i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}