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

int main()
{
    fast
    FI(); /// skip this line for compile
    int n;
    string s;
    cin >> n;
    cin >> s;
    ll a=0,c=0,cnt=0,sum=0;
    for(ll i=n-1; i>=0; i--)
    {
        cnt++;
        if(s[i]=='a')
            a++;
        else if(s[i]=='c')
            c++;

        if(a>c) sum=(sum+cnt)%1000000007;
       // if(c>=a) cnt=0;

        cout << sum << endl;
    }
    cout << sum%1000000007 << endl;
    return 0;
}

