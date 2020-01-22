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
    for(int j = 1; j <= t; j++) {
        int need, f;
        cin >> need >> f;
        vector<int> fre(f);
        for(int i = 0; i < f; i++)
            cin >> fre[i];

        sort(fre.begin(), fre.end(), greater<>());
        int sum = 0;
        int count = 0;
        bool res = false;
        for(int i = 0; i < f; i++) {
            sum+= fre[i];
            count++;
            if(sum >= need)
            {
                res = true;
                break;
            }
        }
        cout<<"Scenario #"<<j<<":"<<endl;        
        if(res) {
            cout<<count<<endl;
        }
        else
        {
            cout<<"impossible\n";
        }
        cout<<endl;
    }

    return 0;
}
