#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
// #define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    
    float c;
    scanf("%f",&c);
    while(c)
    {
        float len=0.00;
        int n=0;
        while(len<c)
        {   n++;  // n is increased before calc len
            len+=1.00/(1.00+n);

        }
        printf("%d card(s)\n",n);
        scanf("%f",&c);
    }
    return 0;
}
