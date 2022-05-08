#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        不是很清楚題序是什麼
    */
    int a{}, b{}, c{}, d{};
    cin >> a >> b >> c >> d;
    if (a == c && b == d) {
        cout << "0\n";
    } else if (a == c || b == d) {
        cout << "1\n";
    } else if (abs(a - c) == (b - d) {
        cout << "1\n";
    } else {
        cout << "2\n";
    }

    return 0;
}

