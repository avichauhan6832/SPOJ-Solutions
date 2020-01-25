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

    int t, m = 1; cin >> t;
    for(int i = 1; i <=t; i++) {
        int n;cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int br[n];
        br[0] = arr[0];
        br[1] = max(arr[0], arr[1]);
        for(int i = 2; i < n; i++)
            br[i] = max(br[i-2]+arr[i], br[i-1]);
        cout<<"Case "<<m++<<": "<<br[n-1]<<endl;
    }

    return 0;
}
