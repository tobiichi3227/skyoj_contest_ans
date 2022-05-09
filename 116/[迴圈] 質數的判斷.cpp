#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        就是個質數判斷而已
    */
    int a{};
    bool is_prime{true};
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            is_prime = false;
            break;
        }
    }

    cout << (is_prime ? "prime\n" : "composite\n");

    return 0;
}

