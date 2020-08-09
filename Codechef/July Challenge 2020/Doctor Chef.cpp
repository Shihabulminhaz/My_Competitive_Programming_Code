/*==============================================*\
Codeforces ID:    mdshihab
                                                  |
Name:     Md. Shihabul Minhaz                     |
Study:      CSE, JKKNIU                           |
Address:  Trishal, Mymensingh, Bangladesh         |
                                                  |
 mail:   mdshihabul20171@gmail.com                |
 FB  :   fb.com/mdshihabul.minhaz.7               |
 github: Shihabulminhaz                           |
stopstalk :  mdshihab                             |
                                                  |
@uthor   Md. Shihabul Minhaz (shihab)             |
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}

void solve()
{
    ll n,x,check;
    cin >> n >> x;
    // check
    vector<ll> v(n);

    for(ll& i:v)
        cin >> i;

    sort(v.begin(),v.end());
    /// check
    vector<ll>::iterator it = lower_bound(v.begin(), v.end(), x);

    ll low_b = it - v.begin();

    ll d = 0;
    // check
    for(ll i=low_b; i<n; i++)
    {
        if(x<v[i])
        {
            while(x<v[i])
            {
                x=2*x;
                d++;
            }
            d++;
        }
        else
            d++;
        x=2*v[i];
    }

    ll total = low_b + d;

    if(low_b!=0)
    {
        d=0;
        // check
        low_b--;

        for(ll i=low_b; i<n; i++)
        {
            if(x<v[i])
            {
                while(x<v[i])
                {
                    x=2*x;
                    d++;
                }
                d++;
            }
            else
                d++;
            x=2*v[i];
        }

        ll answer = min(d+low_b,total);
        //check
        cout<< answer <<endl;
    }
    else
        cout<< total <<endl;
}

int main()
{
    fast
    //FI(); /// skip this line for compile
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
    /// code end
}

