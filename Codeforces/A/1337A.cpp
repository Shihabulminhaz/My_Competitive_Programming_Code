#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    int t,n,a,b ;
    cin>>t;
    while(t--)
    {
        int x,m,n,z;
        cin>>x>>m>>n;
        z=10*n;
        for(int i=0; i<m; i++)
        {
            if(x<=z)
                break;
            x=(x/2)+10;
        }
        if(x<=z)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
