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

    int n; cin >> n;
    while(n) {
        int a[n+1];
        int i;
        for( i = 1;i <= n; i++) {
            cin >> a[i];
        }
        for(i = 1; i <= n; i++)
            if(a[a[i]] != i)
                break;
        if(i != n+1)
            cout<<"not ambiguous\n";
        else
            cout<<"ambiguous\n";
        cin >> n;
    }

    return 0;
}
