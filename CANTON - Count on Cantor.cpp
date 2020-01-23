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
    while (t--)
    {
        int n,k=1; cin >> n;
        int i = 1, j = 1;
        
        while (k < n)
        {
            j++, k++;
            if(k == n)  break;
            
            while (j > 1 && k < n)
                i++, j--, k++;

            if(k == n) break;

            i++, k++;
            if(k == n) break;

            while (i > 1 && k < n)
                i--, j++, k++;
        }
        cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
    }
    

    return 0;
}
