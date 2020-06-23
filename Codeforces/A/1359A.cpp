#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,n,m,k,x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        if(m<=n/k)
            cout << m << endl;
        else
        {
            m -= n/k;
            x = ceil(1.000*m/(k-1));
            cout << n/k - x << endl;

        }
    }
    return 0;
}

