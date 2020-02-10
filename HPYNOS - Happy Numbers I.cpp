#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int dissect(int num)
{
    int ans=0;
    while(num)
    {
        int t=num%10;
        ans+=t*t;
        num/=10;
    }
    return ans;
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int num,count=0,hit=1;
    int arr[1000]={0};
    cin >> num;
    while(1)
    {
        int temp;
        temp=dissect(num);
        if(arr[temp]==0)
        {
            num=temp;
            arr[temp]=1;
            count++;
        }
        else{
            hit=0;
            break;}
        if(num==1)
            break;
    }
    if(hit)
        cout<<count<<endl;
    else
        cout<<"-1\n";

    return 0;
}
