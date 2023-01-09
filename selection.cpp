#include<iostream>
using namespace std;
void pattern(int arr[],int n,int a,int max)
{
	if(n<=0)
	return;
	if(n>a)
	{
		if(arr[a]>arr[max])
		max=a;
		pattern(arr,n,a+1,max);
	}
	else
	{
		swap(arr[max],arr[n-1]);
		pattern(arr,n-1,0,0);
	}
}
int main()
{
	int arr[5]={20,4,6,2,1};
	pattern(arr,5,0,0);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
