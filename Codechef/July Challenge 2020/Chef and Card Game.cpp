/*==============================================*\
Codeforces ID:    mdshihab
Codechef ID : mdshihab
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
    int t,n,a,b;
    cin >> t;
    while(t--)
    {
        int x=0,y=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int sum_a = 0, sum_b = 0;
            cin >> a >> b;
            while(a>0)
            {
                sum_a+=(a%10);
                a/=10;
            }

            while(b>0)
            {
                sum_b+=(b%10);
                b/=10;
            }
            if(sum_a>sum_b)
            {
                x++;
            }
            else if(sum_a<sum_b)
            {
                y++;
            }
            else
            {
                x++;
                y++;
            }
        }
        if(x>y)
        {
            cout << 0 << " " << x << endl;
        }
        else if(x<y)
        {
            cout << 1 << " " << y << endl;
        }
        else
        {
            cout << 2 << " " << x << endl;
        }

    }
    return 0;
}

