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
    int t,n,a,five,ten;
    cin >> t;
    while(t--)
    {
        bool flag = true;
        five=ten=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(flag)
            {
                if(a==5)
                    five++;
                else if(a==10)
                {
                    if(five>0){
                        five--;
                        ten++;
                    }
                    else
                        flag = false;
                }
                else
                {
                    if(ten>0)
                        ten--;
                    else if(five>1)
                        five-=2;
                    else
                        flag = false;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

