#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        水爛
    */
    int w{}, n{}, val{}, gg{};
    bool dead = false;
    cin >> w >> n;
    gg = w/n;
    while (n--) {
        cin >> val;
        if (val < gg) {
            dead = true;
        }
    }

    if (dead) {
        cout << gg << "\nFAIL...\n";
    } else {
        cout << gg << "\nNICEPLAY\n";
    }

    return 0;
}


