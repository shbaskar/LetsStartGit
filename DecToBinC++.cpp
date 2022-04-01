#include<iostream>
using namespace std;

dectobin(int n)
{
	int binarray[32];
	
	int i=0;
	while(n>0)
	{
		binarray[i]=n%2;
		n=n/2;
		i++;
	}
	
	for(int j=i-1;j>=0;j--)
	{
		cout<<binarray[j];
	}
}

int main()
{
	int num;
	cin>>num;
	dectobin(num);
	
	return 0;
}
