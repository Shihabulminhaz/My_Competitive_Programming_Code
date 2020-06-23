#include<bits/stdc++.h>
using namespace std;
int arr[100005];

int main()
{

    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> arr[i];
        }
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        int cnt=0,x=2;
        for(int i=2;i<=n;i++){
            if(arr[i]>arr[i-1] && arr[i]%x==0){
                cnt++;
                x++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

