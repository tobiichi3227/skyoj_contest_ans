#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該是個計算時間的題目
        我直接使用原code
        之後修正
        已修改完成
    */
    int a{}, b{}, c{}, d{};
    cin >> a >> b >> c >> d;

    int tmp = (c - a) * 60 + d - b;
    if (c < a) {
        cout << (24 - a + c) * 60 + d - b << '\n';
    } else if (tmp < 0) {
        cout << 1440 + tmp << '\n';
    } else {
        cout << tmp << '\n';
    }

    return 0;
}

