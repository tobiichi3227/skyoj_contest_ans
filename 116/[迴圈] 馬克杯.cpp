#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        水爛
    */
    int n{}, m{}, val{};
    cin >> n;
    while (n--) {
        cin >> val;
        m = max(m, val);
    }

    cout << m << '\n';

    return 0;
}

