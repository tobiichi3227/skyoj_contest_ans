#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    int n{};
    double val{}, sum{}, q{}, a{6000};
    cin >> n;
    while (n--) {
        cin >> val;
        sum += val;
        q = sum / (double)n;
        if (val >= 91) {
            a = 5000;
        }
        if (q >= 90) {
            a -= (q - 90) * 600;
        }
    }

    cout << a << '\n';

    return 0;
}
