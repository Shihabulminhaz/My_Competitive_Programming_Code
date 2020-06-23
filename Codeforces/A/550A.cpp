#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{

    string s,ans="NO",a="AB",b="BA";
    bool flag1=false,flag2=false;
    int n,x;
    cin >> s;
    n = s.size();
    for(int i=0; i<n-1; i++)
    {
        if(s.substr(i,2)==a)
        {
            ans = "YES";
            flag1 = true;
            x = i+1;
            break;
        }
    }

    if(ans=="YES")
    {
        for(int i=0; i<n-1; i++)
        {
            if(s.substr(i,2)==b && x!=i && i!=x-2)
            {
                flag2 = true;
                break;
            }
        }
    }

    if(ans=="NO" || (flag1==false || flag2==false))
        ans = "NO";


    ///2nd part:
    if(ans=="NO")
    {
        flag1=false,flag2=false;
        for(int i=0; i<n-1; i++)
        {
            if(s.substr(i,2)==b)
            {
                ans = "YES";
                flag1 = true;
                x = i+1;
                break;
            }
        }

        if(ans=="YES")
        {
            for(int i=0; i<n-1; i++)
            {
                if(s.substr(i,2)==a && x!=i && i!=x-2)
                {
                    flag2 = true;
                    break;
                }
            }
        }

        if(ans=="NO" || (flag1==false || flag2==false))
            ans = "NO";

    }

    cout << ans << endl;
    return 0;
}

