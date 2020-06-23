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

    int arr[10],total;
    string s = "NO";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
    total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
                if((arr[i]+arr[j]+arr[k])*2==total){
                    s = "YES";
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}
