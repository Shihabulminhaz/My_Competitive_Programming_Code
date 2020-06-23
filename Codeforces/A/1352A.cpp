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

    int t,n,x;
    cin >> t;
    while(t--)
    {
        vector<int>v;
        int i=1;
        cin >> n;
        while(n!=0)
        {
            x=n%10;
            if(x!=0)
                v.push_back(x*i);
            n=n/10;
            i=i*10;
        }
        cout << v.size() << endl;
        for(int j=0; j<v.size(); j++)
        {
            cout << v[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

