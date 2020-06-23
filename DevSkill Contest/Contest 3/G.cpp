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

   char c = '%';
    string a,b;
    int l,k,m,n,i;
    int n1,n2;
    float ans,x,y;
    while(getline(cin, a) && getline(cin, b))
    {
        n1=0,n2=0;
        l = a.size();
        k = b.size();
        for(int i=0; i<l; i++)
        {
            if('a' <= a[i] && a[i]<='z')
            {
                n1 += (a[i] - 'a') + 1;
            }
            else if('A' <= a[i] && a[i]<='Z')
            {
                n1 += (a[i] - 'A') + 1;
            }
        }

        while(n1 > 9)
        {
            int m = 0;
            while(n1 != 0)
            {
                m += n1%10;
                n1 = n1 / 10;
            }
            n1 = m;
        }


        for(int i=0; i<k; i++)
        {
            if('a' <= b[i] && b[i]<='z')
            {
                n2 += (b[i] - 'a') + 1;
            }
            else if('A' <= b[i] && b[i]<='Z')
            {
                n2 += (b[i] - 'A') + 1;
            }
        }


        while(n2 > 9)
        {
            int n = 0;
            while(n2 != 0)
            {
                n += n2%10;
                n2 = n2 / 10;
            }
            n2 = n;
        }

        x = n1;
        y = n2;

        ans = x/y;
        if(ans >1)
        {

            printf("%0.2f %c\n", 100/ans,c );

        }
        else
        {
            printf("%0.2f %c\n", 100*ans,c);
        }

    }
    return 0;
}

