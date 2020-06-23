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

    int i=1;
    string s;
    while(true)
    {
        cin >> s;
        if(s=="#")
            break;
        else
        {
            if(s=="HELLO")
                printf("Case %d: ENGLISH\n",i);
            else if(s=="HOLA")
                printf("Case %d: SPANISH\n",i);
            else if(s=="HALLO")
                printf("Case %d: GERMAN\n",i);
            else if(s=="BONJOUR")
                printf("Case %d: FRENCH\n",i);
            else if(s=="CIAO")
                printf("Case %d: ITALIAN\n",i);
            else if(s=="ZDRAVSTVUJTE")
                printf("Case %d: RUSSIAN\n",i);
            else
                printf("Case %d: UNKNOWN\n",i);
        }
        i++;
    }

    return 0;
}

