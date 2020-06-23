#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int x[105];
int y[105];
int main()
{

    int t,m,n,i,j,sum,mx_row,mx_col,l,arr[105][105],zz,yy;
    cin >> t;
    for(int l=1; l<=t; l++)
    {
        set<int>st1;
        set<int>st2;
        sum = 0;
        mx_row = 0;
        mx_col = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> arr[i][j];

                if(i==j)
                {
                    sum += arr[i][j];
                }
            }

        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                st1.insert(arr[i][j]);
                st2.insert(arr[j][i]);


            }
            if(st1.size()<n)
            {
                mx_row++;
            }
            if(st2.size()<n)
            {
                mx_col++;
            }
            st1.clear();
            st2.clear();
        }
        cout << "Case #" << l << ": " << sum << " " << mx_row << " " << mx_col << endl;
    }
    return 0;
}

