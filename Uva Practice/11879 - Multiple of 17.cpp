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

    string s;
    int n;
    while(true)
    {
        cin >> s;
        if(s=="0")
            break;
        else
        {
            n=0;
            for(int i=0;i<s.size();i++){
                n = n*10 + s[i] - '0';
                n = n%17;
            }
            if(n==0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}

