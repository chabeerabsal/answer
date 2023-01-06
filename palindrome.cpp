#include<iostream>
using namespace std;
int reverse(int n,int sum)
{
	if(n<=0)
	return sum;
	sum=sum*10+n%10;
    return reverse(n/10,sum);
    
}
int main()
{
	long long n;
	int sum=0;
	cin>>n;
	int ans=reverse(n,sum);
	if(ans==n)
	cout<<"yes";
	else
	cout<<"no";
}
