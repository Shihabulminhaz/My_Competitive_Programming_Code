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
int arr[5];
int main()
{
    fast
    //FI(); /// skip this line for compile
    int n,a,sum=0,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        arr[a]++;
    }
    sum+=arr[4];
    x = min(arr[1],arr[3]);
    sum+=x+(arr[3]-x);
    arr[1]-=x;
    x = arr[2]*2+arr[1];
    sum+=x/4;
    if(x%4) sum++;
    cout << sum << endl;

    return 0;
}

