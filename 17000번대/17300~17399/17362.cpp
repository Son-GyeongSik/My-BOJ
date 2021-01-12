#include <iostream>
using namespace std;

int main() {
	int arr[9]={0,1,2,3,4,5,4,3,2};
	int n;
	cin>>n;
	n--;
	n%=8;
	n++;
	cout<<arr[n]<<endl;
	return 0;
}
