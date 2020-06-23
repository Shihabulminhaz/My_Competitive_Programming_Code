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

    int t,a,b,x,ans=0;
    vector<int>vec;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        vec.push_back(b);
    }
    cin >> x;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]>=x)
            break;

        ans++;
    }
    cout << vec.size() - ans << endl;
    return 0;
}

