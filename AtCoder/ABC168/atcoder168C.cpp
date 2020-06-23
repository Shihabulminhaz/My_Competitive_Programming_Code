#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    double h,m,a,b;
    cin >> a >> b >> h >> m;
    double hour_angle = 0.5 * (h * 60 + m);
    double minute_angle = 6 * m;

    double angle = abs(hour_angle - minute_angle);
    angle = min(360 - angle, angle);
    double c = sqrt(b*b + a*a - 2*a*b*cos(angle*acos(-1)/180)) ;
    cout << setprecision(20) << fixed << c << endl;
    return 0;
}

