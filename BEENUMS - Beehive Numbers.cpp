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

    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
                    break;
        if(n==1)
                cout<<"Y"<<endl;
        else
        {
            n=n-1;
            int i=1;
            while(n>0)
            {
                        n=n-(6*i);
                        i++;
            }
            if(n==0)
                    cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
    }

    return 0;
}
