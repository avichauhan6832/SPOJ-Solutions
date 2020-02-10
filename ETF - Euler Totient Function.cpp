#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int phi(int n)
{
    int result = n;
    int i;
    for(i=2;i*i <= n;i++) 
    { 
        if (n % i == 0) 
        result -= result / i; 
        while (n % i == 0) 
        n /= i; 
    } 
    if (n > 1)
    result -= result / n; 
    return result; 
}

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
        cout<<phi(n)<<endl;
    }
    

    return 0;
}
