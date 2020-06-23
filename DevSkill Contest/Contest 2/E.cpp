#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);


int main(){

int t,n,i,cnt;
long int x[2002];
fi(t);
for(i=1;i<=t;i++){
    int ans = 0;
    fi(n);
    for(int j=0;j<n;j++){
        fli(x[j]);
    }

    sort(x,x+n);

    for(int k = 0;k<n-1;k++){
        for(int l = k+1;l<n;l++){
                int sum = x[k]+x[l]-1;

                int y = upper_bound(x,x+n,sum) - x;
                int cnt = max(0,y-1-l);
                ans += cnt;
        }
    }
    ppi(i,ans);
}

}
