#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
// #define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int G[2019][2019] = {0,0};
int n;
int colorArr[2019];

int chec(int start)
{   
    colorArr[start] = 1;
 
    queue <int> q;
    q.push(start);
    while (!q.empty())
    {
       
        int i = q.front();
        q.pop();
 
       
        for (int j = 1; j <= n; j++)
        {
            if (G[i][j] && colorArr[j] == -1)
            {
       
                colorArr[j] = 1 - colorArr[i];
                q.push(j);
            }
            else if (G[i][j] && colorArr[j] == colorArr[i])
                return 0;
        }
    }
    return 1;
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t,m,x,y,i;
    scanf("%d",&t);
    for(int test = 1 ; test <= t ; test++)
    {
        memset(G,0,sizeof(G));
        int flag=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            G[x][y]=1;
            G[y][x]=1;
        }
        int res;
        for ( i = 1; i <= n; i++)
        colorArr[i] = -1;

        for(i=1;i<=n;i++)
        {
            if(colorArr[i]== -1)
            {
                res=chec(i);
                if(res==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            printf("Scenario #%d:\nSuspicious bugs found!\n",test);
        else
            printf("Scenario #%d:\nNo suspicious bugs found!\n",test);
    }
    return 0;
}
