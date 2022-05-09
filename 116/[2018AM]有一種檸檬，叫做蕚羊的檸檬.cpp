#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    double n{};
    cin >> n;
    cout << fixed << setprecision(2);

    if (n >= 0 && n <= 9) {
        cout << 87 * n;
    } else if (n >= 10 && n <= 19) {
        cout << 81 * n;
    } else if (n >= 20 && n <= 39) {
        cout << (78 * n * 0.95);
    } else if (n == 78) {
        cout << 10.00 * 300.00;
    } else if (n == 87) {
        cout << 66.00 * 100.00;
    } else if (n >= 100) {
        cout << "VIP";
    } else {
        cout << 60 * n;
    }

    cout << '\n';

    return 0;
}
