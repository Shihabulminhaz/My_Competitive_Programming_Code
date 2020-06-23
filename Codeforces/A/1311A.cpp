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

    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a==b)
            cout << 0 << endl;
        else if(a<b)
        {
            if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
                cout << 2 << endl;
            }
            else
                cout << 1 << endl;
        }
    }
    return 0;
}

