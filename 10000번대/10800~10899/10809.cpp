#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int arr[26];
	char s[100];
	cin>>s;
	for(int i=0; i<26; i++)
		arr[i]=-1;
	for(int i=0; i<strlen(s); i++)
	{
		if(arr[s[i]-'a']==-1)
			arr[s[i]-'a']=i;
	}
	for(int i=0; i<26; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
