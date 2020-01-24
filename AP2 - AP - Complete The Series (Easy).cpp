#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int 

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
        int third, thirdlast, sum;
        cin >> third >> thirdlast >> sum;
        int n = (sum*2) / (thirdlast + third);
        int d = (thirdlast - third) / (n-5);
        int a = third - (2*d);
        cout<<n<<endl;
        for(int i = 0; i < n; i++)
            cout<<(a + i*d)<<" ";
        cout<<endl;
    }

    return 0;
}
