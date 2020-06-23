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
    string s,s1;
    int jor=0,bijor=0;
    cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1' && (i+1)%2==1)
            bijor++;
        else if(s[i]=='1' && (i+1)%2==0)
            jor++;
    }
    if(n==1)
        cout << bijor << endl;
    else
    {
        int x=0,y=n-1,ans=bijor,test=0;
        while(x!=y)
        {
            if(x==y)
                break;
            else if(jor<=bijor)
            {
                if(s[y]=='1' && (y)%2==1)
                {
                    bijor--;
                }
                ans+=bijor;
                y--;
                cout << "string : ";
                for(int i=x; i<=y; i++)
                {
                    cout << s[i];
                }
                cout << endl;
            }
            else
            {
                ans+=jor;
                if(s[x]=='1')
                    jor--;

                swap(jor,bijor);
                x++;

                cout << "string : ";
                for(int i=x; i<=y; i++)
                {
                    cout << s[i];
                }
                cout << endl;
            }
        }
        if(s[x]=='1')
            ans++;
        cout << ans << endl;
    }

    return 0;
}

