#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

// int n,c;
int bs(vector<int> arr,int c);
int func(int num, vector<int> arr, int c);

int bs(vector<int> arr,int c) {
    int n = arr.size();
    int ini = 0, last = arr[n-1], max = -1;
    while(last > ini) {
        int mid = (ini +last) / 2;
        if(func(mid, arr, c) == 1) {
            if(mid > max)
                max = mid;
            ini = mid + 1;
        }
        else
            last = mid;
    }
    return max;
}

int func(int num, vector<int> arr, int c) {
    int cows = 1, pos = arr[0], n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] - pos >= num) {
            pos = arr[i];
            cows++;
            if(cows == c)
                return 1;
        }
    }
    return 0;
}



int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t; cin >> t;
    while(t--) {
        int n, c;cin >>n >> c;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int k = bs(arr, c);
        cout<<k<<endl;
    }

    return 0;
}
