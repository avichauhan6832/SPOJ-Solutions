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
    int a,b,c; cin >>a >>b>>c;
    while(a!= 0 && b!=0 && c!= 0) {
        if(b-a == c-b) {
            cout<<"AP "<<c+c-b<<endl;
        }
        else {
            cout<<"GP "<<c*(c/b)<<endl;
        }
        cin>>a>>b>>c;
    }

    return 0;
}
