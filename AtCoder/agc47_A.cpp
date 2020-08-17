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
    double n,x;
   // string s;
    ll test,j=0,f=0,cnt=0,jor=0,ans;
    vector<ll>ff,jj,jorr;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        test = x;
        if(test==x)
        {
            cnt++;
            if(test%2==0)
            {
                jor++;
                cout << "jor" << jor << endl;
              //  jorr.push_back(i+1);
            }
        }
        else
        {
            ll integer = x*10000000000 + 0.05;
            string s = to_string(integer);
            int l = s.size() - 1;
            cout << s << endl;
            while(s[l]=='0')
            {
                l--;
            }
            ll last_digit = s[l] - '0';
            cout << "lst" << last_digit << endl;
            if(last_digit==5)
            {
                f++;
                cout << "f" << f << endl;

            }
            else if(last_digit%2==0)
            {
                j++;
                cout << "j" << j << endl;
           //     cout << last_digit << endl;
               // jj.push_back(i+1);
            }
        }
    }


   // cout << f << j << jor;
    ans = (cnt - 1) + (f*j) + (f*jor) ;
    cout << ans << endl;
    return 0;
}

