#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,x,i=1;
    int n;
    cin>>t;
    while(t--)
    {
        vector<int>vec;
        cin>>n;

        while(n>=2)
        {
            x = n%2;
            vec.push_back(x);
            n=n/2;
        }
        vec.push_back(n);
        vec.push_back(0);

        reverse(vec.begin(),vec.end());
        next_permutation(vec.begin(),vec.end());

        int l= vec.size();
        int ans=0;
        int p=l-1;
        for(int i=0; i<l; i++)
        {
            if(vec[i] != 0)
            {
                ans += (int)pow(2,p);
            }
            p--;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        i++;
    }
    return 0;
}

