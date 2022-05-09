#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    int a1{}, b1{}, a2{}, b2{};
    cin >> a1 >> b1 >> a2 >> b2;
    int sum = a1 + b1;

    if (a2 < a1 && b2 < b1) {
         cout<<"Both players are idiots!\n";
         return 0;
    }

    if (a2 < a1) {
        cout<<"Player A is an idiot!\n";
        return 0;
    }

    if (b2 < b1) {
        cout<<"Player B is an idiot!\n";
        return 0;
    }

    if (a2 == sum && b2 == sum) {
        cout << "Even.\n";
    } else if (a2 == sum) {
        cout << "Player A wins!\n";
    } else if (b2 == sum) {
        cout << "Player B wins!\n";
    } else {
        cout << "Even.\n";
    }

    return 0;
}
