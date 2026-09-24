#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n;
  	cin >> n; 
  	string s;
  	cin >> s; 
  
  	unordered_set<char> st; 
  	vector<long long> pre(n + 1, 0);
  	vector<long long> suf(n + 1, 0); 
  
  	for (long long i = 1; i <= n; i++)
  	{
  		st.insert(s[i - 1]); 
  		pre[i] = st.size();
  	}
  	st.clear(); 
  	for (long long i = n; i >= 1; i--) 
  	{
  		st.insert(s[i - 1]);
  		suf[i] = st.size(); 
  	}
  	long long ans = 0; 
  	for (long long i = 0; i < n; i++) 
  		ans = max(ans, pre[i] + suf[i + 1]); 
  	cout << ans << endl;
}
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
