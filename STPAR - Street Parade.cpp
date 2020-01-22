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
    while(n) {
        vector<int> order(n);
        for(int i = 0; i < n; i++)
            cin >> order[i];
        stack<int> lane; int need = 1;
        bool state = true;
        for (int i = 0; i < order.size(); i++) {
            while (!lane.empty() && lane.top() == need) {
                need++;
                lane.pop();
            }
            if (order[i] == need) {
                need++;
            } else if (!lane.empty() && lane.top() < order[i]) {
                state = false;
                break;
            } else {
                lane.push(order[i]);
            }
        }
        if (state) cout << "yes" << "\n";
        else cout << "no" << "\n";
        cin >> n;
    }

    return 0;
}
