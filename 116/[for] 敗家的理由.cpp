#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        水爛
    */
    int n{}, val{}, sum{}, cnt{};
    cin >> n;
    while (n--) {
        cin >> val;
        sum += val;
        if (val >= 2000) {
            ++cnt;
        }
    }

    if (sum >= 88000 && cnt >= 5) {
        cout << "10888\n";
    } else if (sum >= 88000) {
        cout << "8888\n";
    } else if (sum < 88000 && cnt >= 5) {
        cout << "2000\n";
    } else {
        cout << "0\n";
    }

    return 0;
}

