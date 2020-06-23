#include<bits/stdc++.h>
using namespace std;


int main(){

int t,i;
double ab,ac,bc,de,r,a;

scanf("%d",&t);

for(i=1;i<=t;i++){

    scanf("%lf%lf%lf%lf",&ab,&bc,&ac,&r);
    r = r/(r+1);
    double a = (sqrt(r))*ab;
    printf("Case %d: %.10lf\n",i,a);
}

}
