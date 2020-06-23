#include <bits/stdc++.h>
using namespace std;

int dist[100000];

int getMinMove(int src,int dst)
{
    queue<int>Q;
    Q.push(src);
    for(int i=1; i<100000; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        int v1,v2,v3;
        v1 = 2*u;
        v2 = u-1;
        v3 = u+3;
        if(v1 <= (2*dst))
        {
            if(dist[v1] > dist[u] + 1)
            {
                dist[v1] = dist[u] + 1;
                Q.push(v1);
            }
            if(v1 == dst)
                return dist[dst];
        }
        if(v2 >= 0)
        {
            if(dist[v2] > dist[u] + 1)
            {
                dist[v2] = dist[u] + 1;
                Q.push(v2);
            }
            if(v2 == dst)
                return dist[dst];
        }

        if(v3 >= 0)
        {
            if(dist[v3] > dist[u] + 1)
            {
                dist[v3] = dist[u] + 1;
                Q.push(v3);
            }
            if(v3 == dst)
                return dist[dst];
        }
    }
    return dist[dst];
}

int main()
{
    int a,b,n;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        int minMove = getMinMove(a,b);
        cout << minMove << endl;
    }
    return 0;
}
