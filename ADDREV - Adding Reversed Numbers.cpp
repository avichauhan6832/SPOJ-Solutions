#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int rev(int a) {
    int ans = 0;
    while(a > 0) {
        ans = ans*10 + a%10;
        a = a/10;
    }
    return ans;
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int t; cin >> t;
    while(t--) {
        int a,b; cin >> a >> b;
        a = rev(a);
        b = rev(b);
        int ans = a + b;
        ans = rev(ans);
        cout<<ans<<endl;
    }

    return 0;
}
