#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	int m = 1000000007;
	cin>>n;
	int b, h;
	cin>>b>>h;
	int arr[n];
	int s=0;
	for(int i=0; i<n; i++)	
	{
		cin>>arr[i];
		s+=arr[i];
	}
	vector<int> brr;
	for(int i=0; i<n-1; i++)
	{
		int count=1;
		if(i!=n-1)
		{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]<=arr[j])
			count++;
			if(arr[i]>arr[j])
			break;
		}
		}
		if(i!=0)
		{
			for(int k=i-1; k>=0; k--)
			{
				if(arr[i]<=arr[k])
				count++;
				if(arr[i]>arr[k])
				break;
			}
		}
		brr.push_back(count*arr[i]);
	}
	int max = *max_element(brr.begin(), brr.end());
	cout<<((s-max)*b*h)%m<<endl;
 	return 0;
}

