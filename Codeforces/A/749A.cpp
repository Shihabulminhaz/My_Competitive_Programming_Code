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

    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << endl;
        for(int i=0;i<n/2;i++){
            cout << 2 << " ";
        }
    }
    else{
        cout << n/2 << endl;
        for(int i=0;i<n/2-1;i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}

