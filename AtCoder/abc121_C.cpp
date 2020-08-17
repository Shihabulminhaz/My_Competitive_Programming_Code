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
int shihab;
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}

int main()
{
    fast
    //  FI(); /// skip this line for compile
    ll n,m,a,b,cost=0;
    map<ll, ll>mp;
    map<ll, ll>::iterator it;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        mp[a]+=b;
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(m>=it->second)
        {
            cost+= it->second * it->first;
            m-= it->second;
        }
        else
        {
            cost+= m * it->first;
            m-= m;
        }
        if(m<=0)
            break;
    }
    cout << cost << endl;
    return 0;
    //code end
}
//okbye
