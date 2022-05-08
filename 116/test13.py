#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該類似kattis-mia那題，目前使用原code，之後修改
        已修改完成
    */
    int a{}, b{};
    cin >> a >> b;

    if (a & 1) {
        if (b & 1) {
            cout << "Tie!\n";
        } else {
            if (a == 1) {
                cout << (b > 3 ? "Computer Wins!\n" : "Player Wins!\n");
            } else {
                cout << (b < 3 ? "Computer Wins!\n" : "Player Wins!\n");
            }
        }
    } else {
        if (!(b & 1)) {
            cout << "Tie!\n";
        } else {
            if (a == 2) {
                cout << (b < 2 ? "Computer Wins!\n" : "Player Wins!\n");
            } else {
                cout << (b > 2 ? "Computer Wins!\n" : "Player Wins!\n");
            }
        }
    }

    return 0;
}

