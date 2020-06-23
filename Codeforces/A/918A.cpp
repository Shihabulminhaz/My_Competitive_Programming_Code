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
#endif // LOCAL
}

int fibo[20],arr[1005];
void fib(){
    fibo[1] = 1;
    fibo[2] = 2;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3;i<=15;i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
        arr[fibo[i]] = 1;
    }
}
int main()
{
    fast
    FI();
    fib();
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(arr[i]) cout << "O";
        else cout << "o";
    }
    return 0;
}
