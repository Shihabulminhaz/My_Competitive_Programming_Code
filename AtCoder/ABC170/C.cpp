#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int arr[105];
int main()
{
    fast
    int x,n,a,y,z;
    cin >> x >> n;
    if(n==0)
        cout << x << endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            cin >> a;
            arr[a] = 1;
        }

        for(int i=x; i<=101; i++)
        {
            if(arr[i]==0)
            {
                y = i;
                break;
            }
        }

        for(int i=x; i>=0; i--)
        {
            if(arr[i]==0)
            {
                z = i;
                break;
            }
        }

        if(y-x<x-z)
            cout << y << endl;
        else
            cout << z << endl;

    }
    return 0;
}
