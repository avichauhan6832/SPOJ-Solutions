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
        int ng,nm; cin >> ng>> nm;
        int arr1[ng], arr2[nm], max1 = -1, max2 = -1;
        for(int i = 0; i < ng; i++) {
            cin >> arr1[i];
            if(arr1[i] > max1)
                max1 = arr1[i];
        }
        for(int i = 0; i < nm; i++) {
            cin >> arr2[i];
            if(arr2[i] > max2)
                max2 = arr2[i];
        }
        if(max1 >= max2)
            cout<<"Godzilla\n";
        else
            cout<<"MechaGodzilla\n";
    }

    return 0;
}
