#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000007
#define pi 3.1416

int main()
{

    ll t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        k = 2;
        while(true)
        {
            int x = pow(2,k)-1;
            if(n%x==0)
            {
                cout << n/x << endl;
                break;
            }
            else
            {
                k++;
            }
        }
    }
    return 0;
}
