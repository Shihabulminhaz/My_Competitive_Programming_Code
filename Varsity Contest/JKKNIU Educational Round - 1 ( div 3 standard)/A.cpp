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

int main()
{
    fast
    int t,cnt=0;
    bool flag = true;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int sum=0;
        int l = s.size();

        for(int i=0; i<l; i++)
        {
            if(s[i]!='0')
                sum+=(s[i]-'0');
        }
        // cout << sum << endl;
        if(sum%3==0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

