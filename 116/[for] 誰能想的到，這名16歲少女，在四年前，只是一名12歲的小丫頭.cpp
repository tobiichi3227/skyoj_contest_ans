#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該是個用迴圈求和再多加判斷的題目
    */
    ll n{}, val{}, sum{}, next{2000}; //原code用long long不確定是否有卡測資, 2000可能是題目給的
    bool flag{false};
    cin >> n;
    while (n--) {
        cin >> val;
        if (val > 200) {
            flag = true;
        }
        sum += val;
    }
    if (flag) {
        next *= 0.95;
    }

    if (sum > next) {
        next -= (sum - 2000);
    }

    cout << next << '\n';

    return 0;
}

