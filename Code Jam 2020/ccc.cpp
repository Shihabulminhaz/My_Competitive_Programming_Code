#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int x[12];
array<int,3>arr[1005];
char ch[2]= {'C','J'};
char ans[1005];

int main()
{
    int n,t,test,p1,p2;
    cin >> t;
    for(int l=1; l<=t; l++)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
            arr[i][2]=i;
        }
        cout << "Case #" << l << ": ";
        sort(arr,arr+n);

        x[0]=INT_MAX;
        x[1]=INT_MAX;

        for(int i=n-1; i>=0; i--)
        {
            test = 1;
            p1=0;
            p2=1;
            if(x[p1]>x[p2])
                swap(p1,p2);
            if(arr[i][1]<=x[p1])
            {
                ans[arr[i][2]]=ch[p1];
                x[p1]=arr[i][0];
            }
            else if(arr[i][1]<=x[p2])
            {
                ans[arr[i][2]]=ch[p2];
                x[p2]=arr[i][0];
            }
            else
            {
                cout << "IMPOSSIBLE";
                test = 0;
                break;
            }
        }
        if(test==1)
        {
            for(int i=0; i<n; i++)
            {
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}
