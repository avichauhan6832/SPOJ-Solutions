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

    int g,b; cin >> g >> b;
    while(g != -1 && b != -1) {
        int r;
        if( g > b )
            r = ceil( (double)g/(b+1) );
        else
            r = ceil( (double)b/(g+1) );
        cout << r << endl;
        cin >> g >> b;
    }
    

    return 0;
}
