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

    int t,x,n,team1,team2;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>vec(n+1);
        for(int i=0; i<n; i++)
        {
            cin >> x;
            vec[x]++;
        }
        team2 = *max_element(vec.begin(),vec.end());
        team1 = n + 1 - count(vec.begin(),vec.end(),0);

        if(team1==team2)
            cout << team2-1 << endl;
        else
            cout << min(team1,team2) << endl;


    }
    return 0;
}

