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

    int t,n,arr[105],cnt,first_one=1;
    string s;
    cin >> t;
    while(t--)
    {
        first_one=1;
        s="YES";
        cnt=1;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
            {
                if((s!="YES" || cnt<6) && first_one!=1 )
                {
                    s="NO";
                }
                first_one=0;
                cnt=1;
            }
            else
                cnt++;
        }
        cout << s << endl;
    }
return 0;
}
