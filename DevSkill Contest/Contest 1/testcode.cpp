
#include <bits/stdc++.h>
using namespace std;
#define MX 40

struct info
{
    char ch;
    int val,idx;
};

info arr[MX];
info cpy[MX];

void BubbleSort(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = n - 1; j >= i+1; j--)
        {
            if(arr[j].val < arr[j-1].val)
            {
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i) cout << " ";
        cout << arr[i].ch << arr[i].val;
    }
    cout << "\n";
    puts("Stable");
}

void SelectionSort_with_stability_check(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int mini = i;
        for(int j = i ; j < n ; j++)
        {
            if(cpy[j].val < cpy[mini].val)
            {
                mini = j;
            }
        }
        swap(cpy[i],cpy[mini]);
    }
    bool isStable = true;

    for(int i = 0 ; i < n ; i++)
    {
        if(cpy[i].idx!=arr[i].idx) isStable = false;
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(i) cout << " ";
        cout << cpy[i].ch << cpy[i].val;
    }
    cout << "\n";
    if(isStable) puts("Stable");
    else puts("Not stable");
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i].ch >> arr[i].val;
        arr[i].idx = i;

        /// creating a copy for multiple sort call
        cpy[i] = arr[i];
    }
    BubbleSort(n);
    SelectionSort_with_stability_check(n);
    return 0;
}
