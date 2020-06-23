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

    vector<int>vec;
    int n,sum=0,i=18,x;
    cin >> n;
    while(vec.size()<n)
    {
        i++;
        x = i;
        while(x!=0)
        {
            sum += x % 10;
            x /= 10;
        }
        if(sum==10)
            vec.push_back(i);
        sum = 0;
    }
    cout << vec[n-1] << endl;
    return 0;
}

