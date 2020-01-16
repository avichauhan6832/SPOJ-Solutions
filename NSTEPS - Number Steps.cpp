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
        int a,b; cin >> a >> b;
        if(a!= b && a-b != 2)
            cout<<"No Number\n";
        else {
            if(a%2 == 0 && b%2 == 0)
                cout<<a+b<<endl;
            else
                cout<<a+b-1<<endl;
        }
    }

    return 0;
}
