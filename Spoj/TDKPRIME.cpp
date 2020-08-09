/*==============================================*\
Codeforces ID:    mdshihab
                                                  |
Name:     Md. Shihabul Minhaz                     |
Study:      CSE, JKKNIU                           |
Address:  Trishal, Mymensingh, Bangladesh         |
                                                  |
 mail:   mdshihabul20171@gmail.com                |
 FB  :   fb.com/mdshihabul.minhaz.7               |
 github: Shihabulminhaz                           |
stopstalk :  mdshihab                             |
                                                  |
@uthor   Md. Shihabul Minhaz (shihab)             |
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Desktop\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}


#define MAX 100000000
bool isPrime[100000000];
vector<ll>primes;

void sieve()
{
    primes.push_back(2);
    for(ll i=3; i<=MAX; i+=2)
    {
        if(!isPrime[i]){
            primes.push_back(i);
            for(ll j=i*i; j<=MAX; j+=i<<1){
                isPrime[j] = true;
            }
        }
    }
}
int main()
{
    fast
    FI(); /// skip this line for compile
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}
