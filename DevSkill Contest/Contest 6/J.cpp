#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
vector<int>gr[500005];
bool vis[500005];
int cnt = 0;
int j;
void dfs(int u)
{
    cnt++;
    //cout << cnt << "\n";
    // getchar();
    vis[u] = 1;
    for(int v : gr[u])
    {
        if(vis[v]==0)
        {
            dfs(v);
        }
    }

}

int main()
{
    int n,m,a,b,maximum,t;
    cin >> t;
    while(t--)
    {
        maximum = 0,cnt=0;

        cin >> n >> m;
        for(int i = 1; i<=m; i++)
        {
            cin >> a >> b;
            gr[a].push_back(b);
            gr[b].push_back(a);

        }

        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                dfs(i);
                if(maximum<cnt)
                {
                    //cout << "i = " << i << endl;
                    maximum = cnt;
                }

                cnt=0;
                //cout << "max : " << maximum << endl;
            }


        }
        cout << maximum << endl;

        for(j = 0; j<=n; j++)
        {
            gr[j].clear();
        }
        memset(vis,0,500005);

    }
    return 0;
}

