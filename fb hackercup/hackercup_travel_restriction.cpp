#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//	freopen("final_a.txt", "r", stdin);
//	freopen("output_a.txt", "w", stdout);
	int z=1;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char arr[n];
		char brr[n];
		for(int i=0; i<n; i++)
		cin>>arr[i];
		for(int i=0; i<n; i++)
		cin>>brr[i];
		char crr[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i==j)
				{
					crr[i][j]='Y';
				}
				else if(i<j)
				{
					int f=0;
					for(int a=i; a<j; a++)
					{
						if(brr[a]=='Y' && arr[a+1]=='Y')
						{
							
						}
						else
						{
							f=1;
							break;
						}
					}
					(f==1)?crr[i][j]='N':crr[i][j]='Y';
				}
				else
				{
					int f=0;
					for(int a=i; a>j; a--)
					{
						if(brr[a]=='Y' && arr[a-1]=='Y')
						{
							continue;
						}
						else
						{
							f=1; 
							break;
						}
					}
					(f==1)?crr[i][j]='N':crr[i][j]='Y';
				}
			}
		}
	
		
		cout<<"Case #"<<z<<":"<<endl;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<crr[i][j];
			}
			cout<<endl;
		}
		z++;
	}
 	return 0;
}

