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

    int t;//cout<<"Enter test case : "; 
    cin >> t;
    while(t--) {
        int h,w; //cout<<"\nEnter h and w : ";
        cin >> h>>w;
        
        int table[h+1][w+1], best[h+1][w+1];
        // memset(table, 0, sizeof table);
        // memset(best, 0, sizeof best);
        for(int i = 1; i <= h; i++)
            for(int j = 1; j <= w; j++)
                cin >> table[i][j];
        // cout<<"\nHello world\n";
        for(int i = 0; i <= w; i++)
            best[0][i] = 0;
        for(int j = 0; j <= h; j++)
            best[j][0] = 0;
        
        for(int i = 1; i <= h; i++)
            for(int j = 1; j <= w; j++) {
                if(j == w)
                    best[i][j] = table[i][j] + max(best[i-1][j], best[i-1][j-1]);
                else
                    best[i][j] = table[i][j] + max(best[i-1][j+1], max(best[i-1][j], best[i-1][j-1])) ;
            }

        int ans = -1;
        for(int i = 1; i <= w; i++)
            ans = max(ans, best[h][i]);
        cout<<ans<<endl;
    }

    return 0;
}
