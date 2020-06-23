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
    string  s;
    int j = 1 ;
    while(true)
    {

        cin >> s;
        if(s=="*")
            break;
        else if(s=="Hajj")
            cout << "Case " << j << ": Hajj-e-Akbar" << "\n";

        else
        {
            cout << "Case " << j << ": Hajj-e-Asghar" << "\n";
        }
        j++;
    }
    return 0;
}

