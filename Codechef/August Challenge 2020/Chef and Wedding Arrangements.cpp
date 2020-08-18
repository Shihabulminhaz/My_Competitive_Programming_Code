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
//   FI(); /// skip this line for compile
    ll n,k,t,a,arr[110];
    cin>>t;
    while(t--)
    {

        cin >> n >>k;

        ll a[n+1];
        ll twoD[n+1][n+1]= {0};
        ll inefficiency,vv,g,j,l,o,cc,vc=0,t=1;

        map<ll, ll>mp;

        inefficiency=1000000000000000;

        ll table_hobe=100;
        ll daynamic[101][1001]= {0};

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        map<ll, ll>mp2;

        // cout << "check" << endl;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                twoD[i][j]=0;
                // cout << "check" << endl;
            }
        }

        for(int i=0; i<n; i++)
        {
            mp.clear();
            // cout << "check" << endl;
            for(ll j=i; j<n; j++)
            {
                twoD[i][j]=(j==0)?0:twoD[i][j-1];
                if(mp.count(a[j]))
                {
                    if(mp[a[j]]==1)
                    {
                        twoD[i][j]++;
                    }
                    twoD[i][j]++;
                }
                // cout << "check" << endl;
                mp[a[j]]++;

            }

        }

        int brr[100];

        for(int i=0; i<=table_hobe; i++)
        {
            for(int  j=0; j<=table_hobe; j++)
            {
                daynamic[i][j]=0;
            }
            // cout << "check" << endl;
        }

        for(int i=0; i<n+1; i++)
        {
            daynamic[1][i]=twoD[0][i-1];
            // cout << "check" << endl;
        }

        bool flag = true;

        for(int i=2; i<=table_hobe; i++)
        {
            daynamic[i][1]=0;
            // cout << "check" << endl;
        }

        for(int i=2; i<=table_hobe; i++)
        {
            for(int j=2; j<=n; j++)
            {
                ll maxNum=1000000000000000;

                for(int p=1; p<j; p++)
                {
                    maxNum=min(maxNum,daynamic[i-1][p]+twoD[p][j-1]);
                }
                daynamic[i][j]=maxNum;
            }
        }

        int yyy = 0;

        for(table_hobe =1; table_hobe<=100; table_hobe++)
        {
            inefficiency = min(table_hobe*k+daynamic[table_hobe][n],inefficiency);
            // cout << "check" << endl;
        }

        cout << inefficiency << endl;

    }
    return 0;
    //code end
}
//okbye
