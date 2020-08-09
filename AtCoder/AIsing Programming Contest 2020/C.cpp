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

int arr[100005];
int main()
{
    fast
    //FI(); /// skip this line for compile
    int check;
    for(int i=1;i<=250;i++){
        for(int j=1;j<=250;j++){
            for(int k=1;k<=250;k++){
                check = (i+j+k)*(i+j+k)-i*j-j*k-k*i;
                if(check<10007){
                    arr[check]++;
                }
            }
        }
    }

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}

