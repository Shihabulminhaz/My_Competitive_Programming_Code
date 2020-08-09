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
    int t,n,testok;
    cin >> t;
    while(t--)
    {
        // check
        cin >> n;
        if(n<31)
            cout << "NO\n";
        else if(n==36)
            cout << "YES\n5 6 10 15" << endl;
        else if(n==40)
            cout << "YES\n6 10 22 2" << endl;
        else if(n==44)
            cout << "YES\n6 7 10 21" << endl;
        else
        {
            int x = n-6-10-14;
            cout << "YES\n6 10 14 " << x << endl;
        }
    }
    /// code end
    return 0;
}
/// bye
