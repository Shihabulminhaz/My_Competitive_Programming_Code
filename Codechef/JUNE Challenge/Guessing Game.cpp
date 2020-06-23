#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int flag,answer=1;
    string response;
    int mid=1,number;
    scanf("%d", &number);
    printf("%d\n", mid);
    fflush(stdout);
    //scanf("%s", response);
    cin >> response;
    if(response=="E")
    {
        printf("%d\n", mid);
        fflush(stdout);
        return 0;
    }
    else if(response=="G")
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    if(flag)
    {
        answer++;   /// for testing;
        printf("%d\n", mid);
        fflush(stdout);
        cin >> response;
        int l = 1, r = 100;
        int cnt = 1;
        while (true)
        {
            answer++;   /// for testing;
            if(cnt%2==1)
            {
                mid = (l + r + 1) / 2;
                printf("%d\n", mid);
                fflush(stdout);

                cin >> response;

                 if(mid==number) break; /// for testing;

                if (response=="L")
                    r = mid ;
                else if(response=="G")
                    l = mid;
                else
                    break;
            }
            else
            {
                printf("%d\n", mid);
                fflush(stdout);
               // scanf("%s", response);
               cin >> response;
            }
            cnt++;
        }
    }
    else
    {
        int l = 1, r = 100;
        int cnt = 2;
        while (true)
        {
            answer++;   /// for testing;
            if(cnt%2==0)
            {
                mid = (l + r + 1) / 2;
                printf("%d\n", mid);
                fflush(stdout);

               // scanf("%s", response);
               cin >> response;
                if(mid==number) break; /// for testing;

                if (response=="L")
                    r = mid ;
                else if(response=="G")
                    l = mid ;
                else
                    break;
            }
            else
            {
                printf("%d\n", mid);
                fflush(stdout);
               // scanf("%s", response);
               cin >> response;
            }
            cnt++;
        }
    }
    printf("%d\n", mid);
    printf("%d\n", answer);  /// for testing;
    fflush(stdout);
}
