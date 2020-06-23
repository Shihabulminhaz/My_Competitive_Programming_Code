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

    int n,a,x=0,y=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a!=-1){
            x+=a;
        }
        else{
            if(x==0) y++;
            else x--;
        }
    }
    cout << y << endl;
    return 0;
}

