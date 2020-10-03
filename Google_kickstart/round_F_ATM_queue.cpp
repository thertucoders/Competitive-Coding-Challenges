#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector
#define lli long long int
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define um unordered_map
#define vi vec<int>
#define vc vec<char>
#define vll vec<lli>
#define m_p make_pair
const int mod=1000000007;

using namespace std;

/*

bool isPrime(int x)
{
	 if(x==1)
	 return false;
	 for(int i=2; i*i<=n; i++)
	 {
	  	if(x%i==0)
	  	{
			return false;
		}
	 }
	 return true;
}

*/

int main()
{
	IOS
	int h=1;
//	input_txt()
//	output_txt()
	test_int
	{
		int n, x;
		cin>>n>>x;
		int brr[n];
		vi v;
		for(int i=0; i<n; i++)
		{
			cin>>brr[i];
			int z=brr[i]/x;
			int y=brr[i]%x;
			int s;
			y==0?s=z:s=z+1;
			v.pb(s);		
		}
		int a=*min_element(v.begin(), v.end());
		int b=*max_element(v.begin(), v.end());
		int d=0, f=0;
		vi v1;
		for(int i=a; i<=b; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(v[j]==i)
				{
					v1.pb(j+1);
					d++;
				}
				if(d-1==n)
				{
					f=1;
					break;
				}
			}
			if(f==1)
			break;
		}
			cout<<"Case #"<<h<<": ";
		for(auto it: v1)
		cout<<it<<" ";
		cout<<endl;
		h++;
	}
	

	return 0;
}

