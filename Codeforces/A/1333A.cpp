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
    bool flag;
    char arr[105][105];
    int t,n,m;
    cin >> t;
    while(t--)
    {
        flag = false;
        cin >> n >> m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if((i+j)%2==0)
                    arr[i][j] = 'B';
                else
                    arr[i][j] = 'W';
            }
        }

        if((n*m)%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    if(arr[i][j]=='W')
                    {
                        arr[i][j] = 'B';
                        flag = true;
                        break;
                    }
                }
                if(flag)
                        break;
            }
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

