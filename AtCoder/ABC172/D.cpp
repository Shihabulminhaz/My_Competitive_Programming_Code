/*==============================================*\
Codeforces ID:    mdshihab
 Atcoder ID :   mdshihab                                                 |
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
//ll arr[10000000];
int main()
{
    fast
   // FI(); /// skip this line for compile
    ///brute force solution
    /*
    ll n,l,j=0,ans=1;
    ll sum=0;
    cin >> n;

    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            arr[j]++;
        }
    }

    for(ll i=1;i<=n;i++){
        sum+=i*arr[i];
    }
    cout << sum << endl;*/

    /// optimize solution
   /* ll cnt,ans=0,sum,n;
    cin >> n;
    for(ll i=1;i<=n;i++){
        cnt = n/i;
        sum = (cnt+1) * cnt/2;
        ans+=sum*i;
    }
    cout << ans << endl;*/

    /// more optimize solution
    ll n,ans=0;
    cin >> n;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            ans+=j;
        }
    }
    cout << ans << endl;
    return 0;
}
