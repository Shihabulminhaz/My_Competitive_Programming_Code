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

    int o=0,n=0,e=0,z=0,r=0,num;
    string s;

    cin >> num;
    cin >> s;
    for(int i=0;i<num;i++){
        if(s[i]=='n') cout << 1 << " ";
    }

     for(int i=0;i<num;i++){
        if(s[i]=='z') cout << 0 << " ";
    }
    return 0;
}

