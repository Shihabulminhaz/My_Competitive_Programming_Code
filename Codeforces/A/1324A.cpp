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
 
    int t,n,arr[200],test;
    cin >> t;
    while(t--)
    {
        test = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
 
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]>arr[i]) swap(arr[i],arr[j]);
                if((arr[i]-arr[j])%2==1)
                {
                    test = 1 ;
                    break;
                }
            }
        }
        if(test == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}