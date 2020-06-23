#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

vector<int>gr[20005];
bool vis[20005];
int cnt = 0;
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


    int n,m,a,b;
    cin >> n >> m;   /// n = number of vertex m = number of edge
    for(int i = 0; i<m; i++)
        {
            cin >> a >> b;
            gr[a].push_back(b);
            gr[b].push_back(a);

        }
    if(n==1) cout << "YES\n";
    else if(m != n-1)
    {
        cout << "NO\n";
    }
    else
    {

        dfs(a);
        if(n==cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

