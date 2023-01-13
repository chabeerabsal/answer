#include<iostream>
#include<vector>
using namespace std;
void pass(int arr[],vector<int>&v,int i,int n,int sum)
{
       if(i==n)
       {
       	int summ;
       	for(int i=0;i<v.size();i++)
       	 summ+=v[i];
       	if(summ==sum)
       	{
       		 	for(int i=0;i<v.size();i++)
       	          cout<<v[i]<<" ";
       	          cout<<endl;
		   }
		   return;
		   
	   }
	   v.push_back(arr[i]);
	   pass(arr,v,i+1,n,sum);
	   v.pop_back();
	   pass(arr,v,i+1,n,sum);

}
int main()
{
	vector<int>v;
	int arr[3]={1,2,1};
	pass(arr,v,0,3,2);
}
