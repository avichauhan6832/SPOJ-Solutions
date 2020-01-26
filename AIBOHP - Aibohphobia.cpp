#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int lcs(string s1, string s2) {
    int n = s1.length();
    int a[n+1][n+1];
    int i,j;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++) {
            if(i == 0 || j == 0)
                a[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                a[i][j] = a[i-1][j-1] + 1;
            else
                a[i][j] = max(a[i-1][j], a[i][j-1]);
        }
    return s1.length() - a[n][n];
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t; cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        // cout<<"worling\n";
        int ans = lcs(s1,s2);
        cout<<ans<<endl;
    }
    

    return 0;
}
