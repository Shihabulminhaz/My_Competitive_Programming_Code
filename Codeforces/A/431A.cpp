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

    int arr[5],sum=0;
    string s;
    cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cin >> s;
    for(int i=0;i<s.size();i++){
        sum+=arr[s[i] - '0'];
    }
    cout << sum << endl;
    return 0;
}
