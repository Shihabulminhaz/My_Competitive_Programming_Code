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
    FI();
    int t,x,y,i,j;
    cin >> t;
    string s;
    while(t--)
    {
        x = y = 0;
        cin >> s;
        bool flag = false;
        if(s[0]!='R')
            flag = true ;
        else if(s[0]=='R' && (s[1]>='A' && s[1]<='Z'))
            flag = true;
        else{
            for(int l = 0;l<s.size();l++){
                if(s[l]=='C') {flag = false; break;}
                else{ flag = true ;}
            }
        }
        if(!flag)
        {
            string ans="";
            for(i=1; i<10 && s[i]!='C'; i++)
            {
                x*=10;
                x+= s[i] - '0';
            }
            for(j=i+1; j<s.size(); j++)
            {
                y*=10;
                y+= s[j] - '0';
            }
            while(y>0)
            {
                y-=1;
                ans+='A'+(y%26);
                y/=26;
            }
            reverse(ans.begin(),ans.end());
            cout << ans << x << endl;
        }
        else
        {
            ll ans=0;
            int cnt=0;
            for(int k=0; k<s.size(); k++)
            {
                if('9'>=s[k] && s[k]>='0')
                {
                    break;
                }
                else
                    cnt++;
            }

            ll p = cnt-1;
            for(int k=0; k<cnt; k++)
            {
                ans=ans+((s[k]-'A'+1) * pow(26,p));
                //   cout << ans << endl;

                p--;
            }
            s.erase(s.begin(),s.begin()+cnt);
            cout << "R" << s << "C" << ans << endl;
        }
    }
    return 0;
}

