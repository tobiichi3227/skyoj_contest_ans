#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        不清楚題序是什麼
    */
    int n{};
    double g{};
    cin >> n;
    g = (double)n / 3;
    cout << ((n % 3) ? g++ : g) << '\n';

    return 0;
}

