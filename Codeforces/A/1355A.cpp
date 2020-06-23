#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        k--;
        while(k--)
        {
            string s;
            ll mx,mn;
            s = to_string(n);
            mx = *max_element(s.begin(),s.end()) - '0';
            mn = *min_element(s.begin(),s.end()) - '0';
            if(mn==0)
                break;
            n=n+mx*mn;
        }
        cout << n << endl;
    }
    return 0;
}

