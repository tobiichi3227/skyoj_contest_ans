#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

const array<double, 4> arr{196.35, 357, 963.9, 1909.95};

int main()
{
    miyuki_is_my_wife;

    auto cal = [](const double a, const double b) -> double {
        return a * 7.35 + b + 0.05 * a * 7.35;
    };

    int a{}, b{};
    cin >> a >> b;
    cout << fixed << setprecision(2);
    if (b < 1 && b > 4) {
        cout << "Error!\n";
        return 0;
    }
    cout << cal(a, arr[b - 1]) << '\n';

    return 0;
}
