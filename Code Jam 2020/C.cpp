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

    int t,n,a[1005],b[1005],test,x,y;
    cin >> t;
    for(int l=1; l<=t; l++)
    {

        test = 1;
        string s = "C";
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i] >> b[i];
        }
        cout << "Case #" << l << ": ";
        x = b[0];
        y = 0;
        for(int i=1; i<n; i++)
        {
            if(x<=a[i])
            {
                s += "C";
                x=b[i];
            }
            else if(y<=a[i])
            {
                s += "J";
                y=b[i];
                if(x<=b[i]){
                    x = 0;
                }
            }
            else
            {
                cout << "IMPOSSIBLE" << endl;;
                test = 0;
                break;
            }
        }
        if(test==1)
            cout << s << endl;
    }
    return 0;
}

