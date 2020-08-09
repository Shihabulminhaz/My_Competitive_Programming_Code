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
    // FI(); /// skip this line for compile
    int t,n,ef,xx,gg,arr[1000];
    cin >> t;
    // next
    while(t--)
    {
        bool flag = true;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        if(n==1)
            cout << "YES\n";
        else
        {
            sort(arr,arr+n);
            for(int i=1; i<n; i++)
            {
                if(arr[i]-arr[i-1] >1)
                    flag = false;
            }
            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";

            // debug
        }
    }
    return 0;
}
/// end