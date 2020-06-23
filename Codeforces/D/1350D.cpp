#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int arr[100005],n,k;
void solve()
{
    bool check = false;
    int l = 1;
    int r = n;
    int m;
    while(l<=r)
    {
        m = (l+r)/2;
        if(arr[m]>k)
        {
            r = m-1;
        }
        else if(arr[m]<k)
        {
            l = m+1;
        }
        else
        {
            check = true;
            break;
        }
    }
    if(check==true)
    {
        if((n+1)/2>=m)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    else
        cout << "no\n";
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        bool flag = false;
        cin >> n >> k;
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
            if(arr[i]==k)
                flag = true;
        }
        if(!flag)
            cout << "no\n";
        else
        {
            sort(arr,arr+n);
            solve();
        }
    }
    return 0;
}

