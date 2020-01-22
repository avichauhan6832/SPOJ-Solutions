#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int convert(string s){
 
 
  int result=0;
  for(int i=0;i<s.size();i++){
       result=result*10+(s[i]-'0');
  }
  return result;
}

void solve(string s1,string s2,string s3){
    
  int result;
  if(s3.find("machula")!=std::string::npos){
 
       int num1=convert(s1);
       int num2=convert(s2);
       result=num1+num2;
       cout<<num1<<" + "<<num2<<" = "<<result;
  }
  else if(s2.find("machula")!=std::string::npos){
       int num1=convert(s1);
       int num2=convert(s3);
       result=num2-num1;
       cout<<num1<<" + "<<result<<" = "<<num2;
 
  }
  else
  {
       int num1=convert(s2);
       int num2=convert(s3);
       result=num2-num1;
       cout<<result<<" + "<<num1<<" = "<<num2;
  }
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        char operat,equalto;
        cin>>s1>>operat>>s2>>equalto>>s3;
        solve(s1,s2,s3);
        cout<<endl;
            
    }    

    return 0;
}
