#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該是在arr中找第二大的，變數名使用原code
    */
    int n{}, b1{}, b2{}, val{};
    cin >> n;
    while (n--) {
        cin >> val;
        if (val > b1) {
            b2 = b1;
            b1 = val;
        } else if (val > b2) {
            b2 = val;
        }
    }

    cout << b2 << '\n';

    return 0;
}

