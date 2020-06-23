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

    int n,a;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a==38 || a==39)
            cout << 40 << endl;
        else if(a<43)
            cout << a << endl;
        else
        {
            if(a % 5==3)
                cout << a+2 << endl;
            else if( a%5==4)
                cout << a+1 << endl;
            else
                cout << a << endl;
        }
    }
    return 0;
}

