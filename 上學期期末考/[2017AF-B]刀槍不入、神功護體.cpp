#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    /*
        *
        *
        *
        *
        *
        *
        *
        *
11111111111111111
 222222222222222
  3333333333333
   44444444444
    555555555
     6666666
      77777
       888
        9
    */

    int x{};
    cin >> x;

    if (x & 1) {
        for (int i = 1; i < x; ++i) {
            for (int j = 0; j < x - 1; ++j) {
                cout << " ";
            }
            cout << "*\n";
        }

        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j < i; ++j) {
                cout << " ";
            }
            for (int j = 1; j < (x - i + 1) * 2; ++j) {
                cout << i;
            }
            cout << '\n';
        }
    } else {
        cout<<"What the fuck do you think you're doing?\n";
    }

    return 0;
}
