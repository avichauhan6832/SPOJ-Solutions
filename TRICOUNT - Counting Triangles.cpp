#include <iostream>
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
    while (t--)
    {
        int n; cin >> n;
        if(n %2 == 0) {
            int res = ((n*(n+2))*(2*n+1))/8;
            cout<<res<<endl;
        }
        else {
            int res = (((n*(n+2))*(2*n+1))-1)/8;
            cout<<res<<endl;
        }
    }
    

    return 0;
}
