#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        計算多少個3的倍數
    */
    int n{}, val{}, cnt{};
    cin >> n;
    while (n--) {
        cin >> val;
        if (!(val % 3)) {
            ++cnt;
        }
    }

    cout << cnt << '\n';

    return 0;
}

