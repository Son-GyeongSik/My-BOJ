#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char arr[50][60];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	for(int i=0; i<strlen(arr[0]); i++)
	{
		int j;
		char tmp=arr[0][i];
		for(j=1; j<n; j++)
		{
			if(arr[j][i]!=tmp)
				break;
		}
		if(j==n)
			cout<<tmp;
		else
			cout<<"?";
	}
	cout<<endl;
	return 0;
}
