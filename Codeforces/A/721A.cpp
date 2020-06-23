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

    int n,cnt;
    vector<int>vec;
    string s;
    cin >> n;
    cin >> s;
    cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            cnt++;
        }
        else
        {
            if(cnt>0)
                vec.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt>0)
        vec.push_back(cnt);
    cout << vec.size() << endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
