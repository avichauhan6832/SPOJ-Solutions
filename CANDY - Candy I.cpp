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
    while(n != -1) {
        int a[n], sum = 0;
        //cout<<"Loop started\n";
        for(int i = 0; i <n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        //cout<<"Loop ended\n";
        if(sum % n != 0) {
            cout<<"-1\n";
        }
        else {
            int avg = sum/n, ans = 0;
            for(int i = 0; i < n; i++)
                if(a[i] < avg)
                    ans += avg - a[i];
            cout<<ans<<endl;
        }
        cin >> n;
    }

    return 0;
}
