Ubuntu Pastebin
Paste from aa at Mon, 4 Nov 2019 18:07:05 +0000
Download as text
 1
 2
 3
 4
 5
 6
 7
 8
 9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
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
