#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

vector<int> vec;
map<int,int> m;

int main()
{

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(m[n]==0)
        {
            vec.push_back(n);
            m[n] = 1;
        }
        else
            m[n] = m[n] + 1;
    }

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " " << m[vec[i]] << endl;
    }
    return 0;
}

