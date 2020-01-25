#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

class Node
{
    private:
        int presum;
        int postsum;
        int sum;
        int maxsum;

    public:
        void init(int val) {
            presum = val;
            postsum = val;
            sum = val;
            maxsum = val;
        }
        void infi() {
            presum = -100000;
            postsum = -100000;
            sum = -100000;
            maxsum = -100000;
        }
        void merge_children(Node l, Node r) {
            sum = l.sum + r.sum;
            presum = max(l.presum, l.sum+r.presum);
            postsum = max(r.postsum, r.sum+l.postsum);
            maxsum=max(l.postsum+r.presum,max(l.maxsum,r.maxsum));
        }
        int get_max() {
            return maxsum;
        }
};
Node tree[200005];
int ar[50005];

void build_tree(int node, int be, int en) {
    if(be == en)
        tree[node].init(ar[be]);
    else {
        int mid = (be+en) / 2;
        int l = 2*node;
        int r = l+1;
        build_tree(l, be, mid);
        build_tree(r, mid+1, en);
        tree[node].merge_children(tree[l], tree[r]);
    }
}

Node query(int node,int be,int en,int l,int r)
{
    if(be>en || be>r ||en<l)
    {
        Node a;
        a.infi();
        return a;
    }
    if(be>=l && en<=r)
        return tree[node];
    else
    {
        int mid=(be+en)/2;
        Node a=query(2*node,be,mid,l,r);
        Node b=query(2*node+1,mid+1,en,l,r);
        Node res;
        res.merge_children(a,b);
        return res;
    }
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> ar[i];
    build_tree(1,1,n);
    int q; cin >> q;
    while (q--)
    {
        int l,r;
        cin >> l >> r;
        Node res = query(1,1,n,l,r);
        cout<<res.get_max()<<endl;
    }
    
    return 0;
}
