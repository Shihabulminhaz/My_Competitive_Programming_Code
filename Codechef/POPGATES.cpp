#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

void Flip(char arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='H')
            arr[i] = 'T';
        else
            arr[i] = 'H';
    }
}

int main()
{

    int t,n,k,cnt;
    cin >> t;
    while(t--)
    {
        char arr[105];
        cnt = 0;
        cin >> n >> k;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        while(k!=0)
        {
            if(arr[n-1]=='H')
            {
                Flip(arr,n);
            }
            else
            {
                n--;
                k--;
            }
        }
        for(int i=0; i<n; i++)
            if(arr[i]=='H')
                cnt++;

        cout << cnt << endl;
    }
    return 0;
}

