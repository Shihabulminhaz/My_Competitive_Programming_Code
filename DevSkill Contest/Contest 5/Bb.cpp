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


    int t,check=0;
    ll n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << n;
    /*    if(n==3)
            cout << 2 << endl;
        else if(n==4 || n==5) cout << 3 << endl;
        else
        {
            n--;
            while(true)
            {
                if(n%2==0)
                {
                    n--;
                    check = 1;
                }
                else
                {
                    for(int i = 3; i*i<=n; i+=2)
                    {
                        if(n%i==0)
                        {
                            n--;
                            check = 1;
                            break;
                        }
                    }
                }
                if(check==0){
                    break;
                }
                check = 0;
            }
            cout << n << endl;
        }*/
    }
    return 0;
}
