#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, k) for (int i = j; i <= k; ++i)
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    int grid[3][3];
    for (auto &i : grid) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    bool a_win = false, b_win = false;
    rep(i, 0, 2) {
        int sum1{}, sum2{};
        rep(j, 0, 2) {
            sum1 += grid[i][j];
            sum2 += grid[j][i];
        }
        if (sum1 == 0 || sum2 == 0) a_win = true;
        if (sum1 == 3 || sum2 == 3) b_win = true;
    }

    int sum1 = grid[0][0] + grid[1][1] + grid[2][2];
    int sum2 = grid[0][2] + grid[1][1] + grid[2][0];
    if (sum1 == 0 || sum2 == 0) a_win = true;
    if (sum1 == 3 || sum2 == 3) b_win = true;

    if (a_win && b_win) {
        cout << "Both win\n";
    } else if (a_win) {
        cout << "A win\n";
    } else {
        cout << "B win\n";
    }

    return 0;
}
