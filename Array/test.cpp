#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;

	vector<int> nums(n);

	for(int i=0; i<n; i++)
	{
		cin>>nums[i];
	}

	for(int i=0; i<nums.size(); i++)
	{
		nums[i]*=nums[i];
	}

	sort(nums.begin(), nums.end());

	for(int i=0; i<n; i++)
	{
		cout<<nums[i];
		cout<<endl;
	}


	// return nums;


}