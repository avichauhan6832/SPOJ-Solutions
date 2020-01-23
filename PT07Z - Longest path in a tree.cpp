#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int n,m;
vector<int> v[10001];

pair<int, int> bfs(int u) {
    int dis[n];
    memset(dis, -1, sizeof(dis));

    queue<int> q;
    q.push(u);

    dis[u] = 0;

    while (!q.empty())
    {
        int t = q.front(); q.pop();

        for(int i = 0; i < v[t].size(); i++) {
            int p = v[t][i];
            if(dis[p] == -1) {
                q.push(p);
                dis[p] = dis[t] + 1;
            }
        }
    }

    int nodeIdx, maxDis = 0;
    for(int i = 1; i <= n; i++)
        if(dis[i] > maxDis)
        {
            maxDis = dis[i];
            nodeIdx = i;
        }

    return make_pair(nodeIdx, maxDis);
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int i,j,k;
    cin >> n;
    m = n-1;

    for(i = 1; i <= m; i++) {
        cin >> j >> k;
        v[j].push_back(k);
        v[k].push_back(j);
    }

    pair<int,int> t1,t2;
    
    t1 = bfs(1);
    t2 = bfs(t1.first);

    cout<<t2.second;

    return 0;
}
