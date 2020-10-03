#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//	freopen("final_a.txt", "r", stdin);
//	freopen("output_a.txt", "w", stdout);

	int t;
	cin>>t;
	int i=1;
	while(t--)
	{
		int n;
		cin>>n;
		string s="";
		unordered_map<char, int> mp;
		for(int i=0; i<n; i++)
		{
			char x;
			cin>>x;
			s+=x;
				
		}	
		for(const char &c: s)
		{
			mp[c]++;
		}
		if(abs(mp['A']-mp['B'])==1)
		cout<<"Case #"<<i<<": Y"<<endl;
		else
		cout<<"Case #"<<i<<": N"<<endl;
		i++;
		
	}	
	
	
	
 	return 0;
}

