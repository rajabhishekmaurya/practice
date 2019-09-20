#include <iostream>
using namespace std;

int main() {
	//code
	int a,b,temp,t;
	cin>>t;
	for(int i=1;i<=t;i++){
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;}
	return 0;
}
