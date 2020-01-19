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

    int dp[5003],i,j,k,sum;
    string s;
cin>>s;
while(s[0]!='0')
{
 memset(dp,0,sizeof dp);
 dp[0]=1;
 i=1;
  int len=s.length();
 while(i<len){
     sum=(s[i-1]-'0')*10;
     k=s[i]-'0';
     sum+=k;

     if(k>0)
     {
         dp[i]+=dp[i-1];
     }
     if(sum>9&&sum<=26)
     {
     dp[i]+=dp[i-2<0?0:i-2];
     }
     i++;
 }
cout<<dp[len-1]<<endl;
 cin>>s;
}
    return 0;
}
