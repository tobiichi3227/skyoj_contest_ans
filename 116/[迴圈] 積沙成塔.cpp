#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該是個簡單的迴圈求和而已
        數列為1, 3, 5, 7, 2n - 1
    */
    int n{};
    cin >> n;
    cout << n * n << '\n';

    return 0;
}

