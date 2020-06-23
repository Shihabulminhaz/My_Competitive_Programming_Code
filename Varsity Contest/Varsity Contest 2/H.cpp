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
    int n,five=0,zero=0,a;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a==5)
            five++;
        else
            zero++;
    }

    if(zero==0)
        cout << -1 << endl;
    else
    {
        int x = five/9;
        for(int i=0; i<x*9; i++)
            cout << 5;
        if(x>0)
            for(int i=0; i<zero; i++)
                cout << 0;
        else
            cout << 0;
    }
    cout << endl;
    return 0;
}

