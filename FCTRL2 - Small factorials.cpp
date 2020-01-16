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

    int t;
    cin>>t;
    while(t--) {
        int a[200],rem,i=0,n,m=0,flag;
        cin>>n;
        flag = n;

        while(flag!=0)  {
            rem = flag%10;
            a[i] = rem;
            flag = flag/10;
            i++;
             m++;
        }

         int temp,x=0,index=0;
         for(i=2;i<n;i++)  {
             temp = 0;
             for(index=0;index<m;index++) {
                 x = a[index]*i + temp;
                 a[index] = x%10;
                 temp = x/10;
              }

              while(temp!=0) {
                  a[index] = temp % 10;
                  temp = temp/10;
                  index++;
                  m++;
               }
            }

            for(i=m-1;i>=0;i--) {cout<<a[i];}
                cout<<"\n";
            }
    return 0;
}
