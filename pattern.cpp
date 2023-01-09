#include<iostream>
using namespace std;
void pattern(int n,int a){
	if(n<=0)
	return;
	if(a<n)
	{
		cout<<"*"<<" ";
		pattern(n,a+1);
	}
	else{
	
	cout<<endl;
	pattern(n-1,0);
}
}
int main()
{
	int n;
	cin>>n;
	pattern(n,0);
}
