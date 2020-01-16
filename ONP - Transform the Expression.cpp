#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int prec(char opr) {
    if(opr == '+' || opr == '-')
        return 1;
    else if(opr == '*' || opr == '/')
        return 2;
    else if(opr == '^')
        return 3;
    else
        return -1;
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
        string exp; cin >> exp;
        string postfix;
        stack<char> stk;

        for(int i = 0; exp[i]; i++) {
            if(exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z')
                postfix.push_back(exp[i]);
            else if(exp[i] == '(')
                stk.push('(');
            else if(exp[i] == ')') {
                while(!stk.empty() && stk.top() != '(') {
                    postfix.push_back(stk.top());
                    stk.pop();
                }
                if(!stk.empty())
                    stk.pop();
            }
            else {
                while(!exp.empty() && prec(exp[i]) <= prec(stk.top())) {
                    postfix.push_back(stk.top());
                    stk.pop();
                }
                stk.push(exp[i]);
            }
        }
        while(!stk.empty()) {
            postfix.push_back(stk.top());
            stk.pop();
        }
        cout<<postfix<<endl;
    }

    return 0;
}
