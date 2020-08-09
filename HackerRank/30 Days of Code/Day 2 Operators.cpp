#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, double tip_percent, double tax_percent) {
double s = meal_cost + (meal_cost*tip_percent)/100 + (meal_cost * tax_percent)/100;
long long ans = s;
if(ans+1-0.5>=s) cout << ans << endl;
else cout << ans+1 << endl;

}

int main()
{
    double meal_cost;
    cin >> meal_cost;

    double tip_percent;
    cin >> tip_percent;

    double tax_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
