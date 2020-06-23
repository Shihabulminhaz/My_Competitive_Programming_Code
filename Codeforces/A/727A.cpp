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
 
    long int a,n,arr[50],i=0,test=0;
    cin >> a >> n;
    arr[0] = n;
    while(n>=a)
    {
        i++;
        if(n==a)
        {
            test = 1;
            break;
        }
        else if(n%2==0)
        {
            n/=2;
            arr[i] = n;
        }
        else if((n-1)%10==0)
        {
            n = (n-1)/10;
            arr[i] = n;
        }
        else{
            break;
        }
    }
    if(test==1)
    {
        cout << "YES\n" << i << endl;
        for(int j=i-1; j>0; j--)
        {
            cout << arr[j] << " ";
        }
        cout << arr[0] << endl;
    }
    else
        cout << "NO\n";
    return 0;
}