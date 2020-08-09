/*==============================================*\
Codeforces ID:    mdshihab
Codechef  ID :   mdshihab                         |
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
map<int,int>mp1;
map<int,int>mp2;
int main()
{
    fast
    //FI(); /// skip this line for compile
    int t,n,a,b;
    map<int,int>::iterator it1;
    map<int,int>::iterator it2;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<4*n-1; i++)
        {
            cin >> a >> b;
            mp1[a]++;
            mp2[b]++;
        }
        for(it1=mp1.begin(); it1!=mp1.end(); it1++)
        {
           // cout << it1->first << " " << it1->second << endl;
            if((it1->second)%2)
            {
                cout << it1->first << " ";
                break;
            }
        }
        for(it2=mp2.begin(); it2!=mp2.end(); it2++)
        {
            if((it2->second)%2)
            {
                cout << it2->first << endl;
                break;
            }
        }
        mp1.clear();
        mp2.clear();
    }
    return 0;
}
