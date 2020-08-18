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
    int t,n,k,mn,a,ans;
    cin >> t;
    while(t--)
    {
        mn = 2000000000;
        cin >> n >> k;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(k%a==0)
            {
                if(mn>k/a)
                {
                    mn = k/a;
                    ans=a;
                }
            }
        }
        if(mn==2000000000)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
    //code end
}
//okbye
