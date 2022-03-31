#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int n1=sizeof(input1)/sizeof(*input1);
	int n2=sizeof(input2)/sizeof(*input2);
	
	if(n1!=n2)
	{
		return false;
	}
	
	std::sort(input1,n1);
	std::sort(input2,n2);
	
	for(int i=0;i<n1;i++)
	{
		if(input1[i]!=input2[i])
		{
			return false;
		}
		
		return true;
	}
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
