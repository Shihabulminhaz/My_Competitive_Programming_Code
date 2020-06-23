#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
char ans[1005];
char ch[2]= {'C','J'};
int a[1005];
int main()
{

    int n,x[10],t,test,p1,p2;
    cin >> t;
    for(int l=1; l<=t; l++)
    {
        test = 1;
        pair<int, int>arr[1005];
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i][0].first >> arr[i][1].second;
            a[i] = i;

        }
        cout << "Case #" << l << ": ";
        sort(arr,arr+n);
        x[0]=10000000;
        x[1]=10000000;
        for(int i=n-1; i>=0; i--)
        {
            p1=0;
            p2=1;
            int test = 0;
            if(x[p1]>x[p2])
                swap(p1,p2);
            if(arr[i].second<=x[p1])
            {
                test = 1;
                ans[a[i]]=ch[p1];
                x[p1] = arr[i].first;
            }
            if(test==0 && arr[i].second<=x[p2])
            {
                test = 1;
                ans[a[i]]=ch[p2];
                x[p2] = arr[i].first;
            }
            if(test==0)
            {
                cout << "IMPOSSIBLE" ;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}

