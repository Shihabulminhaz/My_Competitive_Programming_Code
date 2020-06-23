#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{
    ll t,n,over = pow(2,32),x=0;
    string s;
    stack<ll>stk;
    stk.push(1);
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(s=="add")
        {
            x += stk.top();
        }
        else if(s=="for")
        {
            cin >> n;
            stk.push(min(over,n*stk.top()));
        }
        else
        {
            stk.pop();
        }
    }
    if(x>=over)
        cout << "OVERFLOW!!!\n";
    else
    {
        cout << x << endl;
    }
    return 0;
}

