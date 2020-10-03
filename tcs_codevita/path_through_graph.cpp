#include <bits/stdc++.h>
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
#define vlli vec<lli>
#define si set<int>
#define m_p make_pair
const int mod=1000000007;
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


int main() {
	IOS
// 	input_txt()
// 	output_txt()	
	int n, m; 
	cin>>n>>m;
	vi arr, brr;
	arr.pb(n);
	brr.pb(m);

	while(n > 1){
		if(isPrime(n)){
			arr.pb(1);
			n /= n;
		}
		else{
			for(int i=2; i*i <= n; i++){
				if(n % i == 0){
					arr.pb(n/i);
					n /= i;
					break;
				}
			}
		}
	}
	while(m > 1){
		if(isPrime(m)){
			brr.pb(1);
			m /= m;
		}
		else{
			for(int i=2; i*i <= m; i++){
				if(m % i == 0){
					brr.pb(m/i);
					m /= i;
					break;
				}
			}
		}
	}

	if(arr.size() == 0) arr.pb(1);
	if(brr.size() == 0) brr.pb(1);

	int ans;
	n = arr.size();
	m = brr.size();

	si st(arr.begin(), arr.end());

	for(int i=0; i<m; i++){
		if(st.find(brr[i]) != st.end()){
			ans = brr[i];
			break;
		}
	}

	int cnt = 0;
	for(int i=0; i<n; i++){
		if(arr[i] > ans) 
			cnt++;
		else 
			break;
	}
	for(int i=0; i<m; i++){
		if(brr[i] > ans) 
			cnt++;
		else 
			break;
	}

	cout << cnt << endl;

	return 0;
}

/*




///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \





*/
