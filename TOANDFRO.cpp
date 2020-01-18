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
    int n; cin >> n;
    while(n != 0) {
        string s; cin >> s;
        int length = s.length();
        int m = length/n;
        //cout<<m<<endl;
        char a[m][n], p = 0;
        for(int j = 0; j < m; j++) {
            if(j %2 == 0) {
                for(int k = 0; k < n; k++)
                    a[j][k] = s[p++];
            }
            else {
                for(int k = n-1;k>=0; k--)
                    a[j][k] = s[p++];
            }
        }
        for(int i = 0; i < n;i++)
            for(int j = 0; j < m; j++ )
                cout<<a[j][i];
        cout<<endl;
        /*for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++) {
                cout<<a[i][j];
            }
            cout<<endl;
        }*/
        cin >> n;
    }

    return 0;
}
