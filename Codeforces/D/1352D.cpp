#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,x;
    cin >> t;
    while(t--){
        deque<int>dq;
        int a=0,b=0,cnt=0,x,y;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> x;
            dq.push_back(x);
        }
        x=0,y=0;
        while(!dq.empty()){
            x=0;
            bool flag = false;
            while(!dq.empty() && x<=y){
                x+=dq.front();
                dq.pop_front();
                flag = true;
            }
            if(flag) cnt++;
            a+=x;
            y=0;
            flag = false;
            while(!dq.empty() && x>=y){
                y+=dq.back();
                dq.pop_back();
                flag = true;
            }
            if(flag) cnt++;
            b+=y;
        }
        cout << cnt << " " << a << " " << b << endl;
    }
    return 0;
}

