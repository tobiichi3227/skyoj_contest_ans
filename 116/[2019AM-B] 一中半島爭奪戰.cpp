#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*

    */
    ll a{}, b{}; //原code用long long,不確定題目是否有卡long long
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }

    if (a == b) {
        cout << "all dead\n";
    } else {
        cout << (a - b) << '\n';
    }

    return 0;
}

