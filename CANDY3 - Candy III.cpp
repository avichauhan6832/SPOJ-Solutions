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
        int n; cin >>n;
        int a[n], sum = 0;
        for(int i =0; i < n; i++) {
            cin >> a[i];
            sum = ( sum + a[i]) % n;
        }
        if(sum == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
