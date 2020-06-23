#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000007
#define pi 3.14

int main()
{

    ll t,n,k,i;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if(n%2==0)
            cout << n+k*2 << endl;
        else
        {
            for(i=2; i*i<=n+1; i++)
            {
                if(n%i==0)
                    break;
            }
            if(i>sqrt(n))
                n+=n;
            else
                n+=i;
            cout << n+(k-1)*2 << endl;
        }
    }
    return 0;
}

