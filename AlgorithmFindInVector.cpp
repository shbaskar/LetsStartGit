#include <bits/stdc++.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int>  v = {10, 35, 85, 93, 62, 10, 345, 43, 2, 10}; 
	cout<<"Will check if 5 number is present in list or not"<<endl;
	int f=find(v.begin(),v.end(),35);
	cout<<f;
}
