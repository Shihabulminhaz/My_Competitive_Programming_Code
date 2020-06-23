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

    int n,x,cnt=0;
    vector<int>vec;
    cin >> n;
    cin >> x;
    for(int i=1; i<n; i++)
    {
        cin >> x;
        if(x==1)
        {
            vec.push_back(i-cnt);
            cnt = i;
        }
    }
    vec.push_back(n-cnt);
    cout << vec.size() << endl;
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    return 0;
}
