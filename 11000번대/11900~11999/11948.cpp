#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int sci[4];
	int soc[2];
	for(int i=0; i<4; i++)
		cin>>sci[i];
	cin>>soc[0]>>soc[1];
	sort(sci,sci+4);
	sort(soc,soc+2);
	cout<<sci[3]+sci[2]+sci[1]+soc[1]<<endl;
	return 0;
}
