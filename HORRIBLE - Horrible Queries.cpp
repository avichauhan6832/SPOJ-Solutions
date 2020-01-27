#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
// const int N=1e6+5;
const int N = 100005;
int lazy[4*N];
int seg[4*N];

void build(int low, int high, int node) {
    if(low > high)
        return;
    if(low == high)
        {
            seg[node] = 0;
            return;
        }
    int mid = (low+high) / 2;
    build(low, mid, 2*node+1);
    build(mid+1, high, 2*node + 2);
    seg[node] = seg[2*node + 1] + seg[2*node+2];
}

void update(int low, int high, int lq, int hq, int node , int val) {
    if(lazy[node]) {
        seg[node] += (high - low + 1) * lazy[node];
        if(high!=low) {
            lazy[2*node + 1] += lazy[node];
            lazy[2*node + 2] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(low > hq || high < lq)   return;
    if(lq <= low && high <= hq) {
        seg[node] += (high - low + 1) * val;
        if(high != low) {
            lazy[2*node+1] += val;
            lazy[2*node+2] += val;
        }
        return;
    }
    int mid = (high + low) / 2;
    update(low, mid, lq, hq,2*node+1, val);
    update(mid+1,high, lq, hq, 2*node+2, val);
    seg[node] = seg[2*node + 1] + seg[2*node+2];
}

int query(int low, int high, int lq, int hq, int node) {
    if(lazy[node]) {
        seg[node] += (high - low + 1) * lazy[node];
        if(high != low) {
            lazy[2*node+1] += lazy[node];
            lazy[2*node+2] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(low > hq || high < lq)   return 0;
    if(lq <= low && high <= hq) return seg[node];
    int mid = (high + low)/2;
    return (query(low, mid,lq,hq,2*node+1) + query(mid+1, high, lq, hq, 2*node+2));
}


int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t; cin >> t;
    while (t--)
    {
        int n,q; 
                
        memset(seg, 0, sizeof(seg));
        memset(lazy, 0, sizeof(lazy));
        cin >> n >> q;
        int type, x, y;
        int val;
        build(0, n-1, 0);

        while (q--)
        {
            cin >> type;
            if(type) {
                cin >> x >> y;
                cout<<query(0,n-1,x-1,y-1,0)<<endl;
            }
            else
            {
                cin >> x >> y >> val;
                update(0,n-1,x-1,y-1,0,val);
            }
        }                
    }
        

    return 0;
}
