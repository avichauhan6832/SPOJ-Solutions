#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int unsigned long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

map<int, int> dp;

long long f(int n){
    if(n==0) return 0;

    if(dp[n]!=0) return dp[n];

    int aux=f(n/2)+f(n/3)+f(n/4);

    if(aux>n) dp[n]=aux;
    else dp[n]=n;

    return dp[n];
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n;
    while(cin>> n) {
        cout<<f(n)<<endl;
    }

    return 0;
}
