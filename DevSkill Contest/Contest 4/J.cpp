#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007
int divCnt[max+5];
vector<int>divisors[max+5];

void sieve_div(int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j = j+i)
        {
            divCnt[j]++;
            divisors[j].push_back(i);

        }
    }

}

int main()
{

    int n,t;
    long int sum;
    sieve_div(100000);
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;

        if(n==0) break;
        else if(n==2 || n==3 || n==5 || n==7){
          cout << -1;
        }
        else if(n/2 || n==3 || n==5 || n==7)
        for(int i=divisors.size()-2; i>=1; i--){
                if()
            cout << divisors[n][i] << " ";
            //sum += divisors[n][i];
        }
        cout << sum << "\n";


    }

    return 0;
}
