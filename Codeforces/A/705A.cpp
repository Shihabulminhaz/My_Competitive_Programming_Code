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

    int n,t;
    cin >> n;
    if(n==1)
        cout << "I hate it" << endl;
    else
    {
        t = n;
        t=1;
        while(t<n)
        {
            if(t%2==1)
                cout << "I hate that ";
            else
                cout << "I love that ";

            t++;
        }
        if(n%2==1)
            cout << "I hate it\n";
        else
            cout << "I love it\n";
    }
    return 0;
}

