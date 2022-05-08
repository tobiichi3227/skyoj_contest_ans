#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define dd cout << '\n'
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        水爛
    */
    ll x{}, y{}; //原code用long long，不確定題目是否有卡long long
    cin >> x >> y;
    if (x > y) {
        swap(x, y);
    }

    for (int i = x; i <= y; ++i) {
        cout << i << " ";
    }
    dd;

    return 0;
}

