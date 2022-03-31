#include<iostream>
using namespace std;

reverse(int arr[],int num)
{
	for(int j=num-1;j>=0;j--)
	{
		cout<<arr[j]<<" ";
	}
}

int main()
{
	int num;
	cin>>num;
	 
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	 	 
	reverse(arr,num);
	return 0;
}
