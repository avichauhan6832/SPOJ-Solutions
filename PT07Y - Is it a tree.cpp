#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int ko;
int n,m;
vector<int> v[10001];

int dfs() {
    int i,j,k;
    stack<int> s;
    bool visit[10001];
    for(i = 1; i <= n; i++)
        visit[i] = 0;
    s.push(1);
    ko = 0;
    while (s.size() > 0)
    {
        ko++;
        j = s.top();
        s.pop();
        if(visit[j] == true)
            return 0;
        visit[j] = true;
        for(i = 0; i < v[j].size(); i++)
            s.push(v[j][i]);
    }
    if(ko == n)
        return 1;
    else 
        return 0;
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int i,j,k;
    cin >> n >> m;
    for(i = 1; i <=m ;i++) {
        cin >> j >> k;
        v[j].push_back(k);
    }
    k = dfs();
    if(k == 1 && (m+1 == n))
        cout<<"YES";
    else 
        cout<<"NO";


    return 0;
}
