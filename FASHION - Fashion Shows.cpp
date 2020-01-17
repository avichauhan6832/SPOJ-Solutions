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
        int n; cin >> n;
        int m[n], w[n];
        for(int i = 0; i < n; i++)
            cin >> m[i];
        for(int i = 0; i <n; i++)
            cin >> w[i];
        sort(m,m+n);
        sort(w, w+n);
        int sum = 0;
        for(int i = 0; i <n; i++) {
            sum += m[i] * w[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
