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
    // FI(); /// skip this line for compile
    ll t,codeok,done;
    ll arr[29],al1[29];

    string s1,s2,s,finals,ss,kkk;
    cin >> t;
    while(t--)
    {
        cin >> s1 >> s2;

        ll n=s1.size();
        ll m=s2.size();

        memset(arr,0,sizeof(arr));


        for(int i=0; i<m; i++)
        {
            arr[s2[i]-'a']--;
        }


        bool flag;

        /*for(int i=0; i<m; i++)
        {
            arr[s2[i]-'a']--;
        }*/
        for(int i=0; i<n; i++)
        {
            arr[s1[i]-'a']++;

        }


        for(int i=0; i<26; i++)
        {
            al1[i]=arr[i];
        }


        s = "";

        for(int i=0; i<=(s2[0]-'a'); i++)
        {
            while(arr[i]>0)
            {
                s+=(char)(i+97);
                arr[i]--;

            }
            int check;
        }


        s+=s2;

        for(int i=0; i<26; i++)
        {
            while(arr[i]>0)
            {
                s+=(char)(i+97);
                arr[i]--;
            }
        }

        finals="";

        int check = 5;

        for(int i=0; i<s2[0]-'a'; i++)
        {
            while(al1[i]!=0)
            {
                finals+=(char)(i+97);
                al1[i]--;
            }
        }

        finals+=s2;
        check = 5;

        for(int i=0; i<26; i++)
        {
            while(al1[i]!=0)
            {
                finals+=(char)(i+97);
                al1[i]--;
            }
        }

        check = 10;

        cout << min(s,finals) << endl;
    }
    return 0;
    //code end
}
//okbye
