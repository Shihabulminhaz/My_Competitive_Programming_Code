#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int arr[101];
vector<int>vec;

int main()
{

    int t,n,cnt=0,a,b;
    cin >> t >> n;
    while(t--)
    {
        cin >> a >> b;
        for(int i=a; i<=b; i++)
        {
            arr[i] = 1;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }

    cout << vec.size() << endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}

