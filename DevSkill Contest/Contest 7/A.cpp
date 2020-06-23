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

    int n,x,y,test = 0,m;
    vector<int>a,b;
    cin >> n;
    m = n;
    while(n--)
    {

        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=0; i<m-1; i++)
    {
        if(a[i]!=b[i])
        {
            test = 1;
            break;
        }
    }
    if(test==0)
        cout << "Poor Alex\n";
    else
        cout << "Happy Alex\n";
    return 0;
}

