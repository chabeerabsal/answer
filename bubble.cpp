#include<iostream>
using namespace std;
void pattern(int arr[],int n,int a)
{
	if(n<=0)
	return;
	if(n-1>a)
	{
		if(arr[a]>arr[a+1])
		swap(arr[a],arr[a+1]);
		pattern(arr,n,a+1);
	}
	else
	{
		pattern(arr,n-1,0);
	}
}
int main()
{
	int arr[5]={2,1,6,5,4};
	pattern(arr,5,0);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
