#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    int count=0;
    for(int i=0;i<input.length();i++)
    {
    	if(input[i]==' ')
    	{
    		count++;
		}
	}
	count++;
	cout<<count<<endl;
	for(int j=0;j<count;j++)
	{
		cout<<input[0]<<endl;
		int temp=input[0];
		for(int k=0;k<count;k++)
		{
			input[k]=input[k+1];
		}
		input[count-1]=temp;
	}
	return input;
}

int main()
{
    string s;
    cin >> s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
