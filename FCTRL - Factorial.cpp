#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int t; cin >> t;
    while(t--) {
        int a; cin >> a;
        int x = 5;
        int ans = 0;
        while(a/x > 0)  {
            ans += a/x;
            x *= 5;
        }
        cout<<ans<<endl;
    }

    return 0;
}
