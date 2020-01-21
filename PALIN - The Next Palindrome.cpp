#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

void generateNextPal(vector<int> num) {
    int n = num.size();
    int mid = n/2;
    bool leftsmaller = false;
    int i = mid - 1;
    int j = (n%2) ? mid + 1 : mid;

    while(i >= 0 && num[i] == num[j])
        i--,j++;

    if(i < 0 || num[i] < num[j])
        leftsmaller = true;

    while(i >= 0) {
        num[j] = num[i];
        i--, j++;
    }

    if(leftsmaller) {
        int carry = 1;
        i = mid - 1;
        if(n % 2 == 1) {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
        {
            j = mid;
        }
        while (i>= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--];
        }
    }
    for(int i = 0; i < num.size(); i++) {
        cout<<num[i];
    }
    cout<<endl;
}

bool areall9(vector<int> num) {
    for(int i = 0; i < num.size(); i++)
        if(num[i] != 9)
            return false;
    return true;
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
        int n; cin >> n;
        vector<int> num;
        while(n != 0) {
            int x = n % 10;
            num.push_back(x);
            n /= 10;
        }
        reverse(num.begin(), num.end());
        // printArray(num);
        if(areall9(num)) {
            cout<<"1";
            for(int i = 1; i < num.size(); i++)
                cout<<"0";
            cout<<"1\n";
        }
        else {
            generateNextPal(num);
        }
    }

    return 0;
}
