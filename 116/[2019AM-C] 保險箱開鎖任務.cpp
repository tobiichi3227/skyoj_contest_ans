#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    auto get_sum = [](const int a, const int b) -> int {
        return ((b > a) ? ((a + 40 - b) * 9) : ((a - b) * 9));
    };

    int a{}, b{}, c{}, d{}, sum{1080};
    cin >> a >> b >> c >> d;
    sum += get_sum(a, b), sum += get_sum(c, b), sum += get_sum(d, c);
    cout << sum << '\n';

    return 0;
}

