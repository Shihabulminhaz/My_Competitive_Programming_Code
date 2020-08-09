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
#define pi(a) prllf("%d\n",a);
#define ppi(i,a) prllf("Case %d: %d\n",i,a);
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
    ll n,test=0,check = 0;
    std::map<ll, ll> m1;
    std::map<ll, ll> m2;
    std::map<ll, ll> m3;
    std::map<ll, ll> m4;
    std::map<ll, ll> m5;
    std::vector<ll>v1;
    std::vector<ll>v2;

    cin >> n;

    ll x1[n],x2[n];
    vector<ll> a(n),b(n);

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
      //  x1[i] = a[i];
        m1[a[i]]++;
        m3[a[i]]++;
    }

    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
       // x2[i] = b[i];
        m2[b[i]]++;
        m3[b[i]]++;
    }
    for(ll i=0; i<n; i++)
    {
        x1[i] = a[i];
        x2[i] = b[i];
    }

    sort(x1,x1+n);
    sort(x2,x2+n);


    for(auto i:m3)
    {
        if(i.second%2!=0)
        {
            test=1;
            break;
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(x1[i]!=x2[i])
        {
            check=1;
            break;
        }
    }

    if(check==0)
        cout<<0<<endl;
    else if(test==1)
        cout<<-1<<endl;
    else
    {
        ll ans=0;
        ll m=INT_MAX;

        for(ll i=0; i<n; i++)
            m=min(m,a[i]);
        for(ll i=0; i<n; i++)
            m=min(m,b[i]);

        /// cout << check << endl;
        for(auto i:m1)
        {
            if(i.second>m2[i.first])
                m4[i.first]=(i.second-m2[i.first])/2;
        }

        for(auto i:m2)
        {
            if(i.second>m1[i.first])
                m5[i.first]=(i.second-m1[i.first])/2;
        }

        for(auto i:m4)
        {
            for(ll j=0; j<i.second; j++)
                v1.push_back(i.first);
        }
        /// cout << check << endl;
        for(auto i:m5)
        {
            for(ll j=0; j<i.second; j++)
                v2.push_back(i.first);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
       // reverse(v2.begin(),v2.end());

        for(ll i=0; i<v1.size(); i++)
        {
            ll k1=v1[i];
            ll k2=v2[i];
            ans+=min(2*m,(min(k1,k2)));
        }
        /// cout << check << endl;
        cout<<ans<<endl;
    }
}

int32_t main()
{
    fast
    // FI(); /// skip this line for compile
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
    /// code end
}

