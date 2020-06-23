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

    int x;
    cin >> x;
    if(x%4==1)
        cout << 0 << " " << "A" << endl;
    else if(x%4==3)
        cout << 2 << " " << "A" << endl;
    else if(x%4==2)
        cout << 1 << " " << "B" << endl;
    else
        cout << 1 << " " << "A" << endl;
    return 0;
}

