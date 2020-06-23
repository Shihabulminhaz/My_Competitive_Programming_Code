#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define ll long long
#define max 10000007

int main()
{

    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n==1 || m==1)
            cout << "YES\n";
        else if(n==2 && m==2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

