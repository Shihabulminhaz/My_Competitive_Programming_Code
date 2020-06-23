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

    vector<double>vec;
    double x;
    while(cin >> x)
    {
        x = 1.0000*sqrt(x);
        vec.push_back(x);
    }
    for(int i=vec.size()-1; i>=0; i--)
        cout << fixed << setprecision(4) << vec[i] << endl;
    return 0;
}
