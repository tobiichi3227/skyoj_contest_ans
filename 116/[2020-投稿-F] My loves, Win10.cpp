#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        完整題目連結：https://github.com/hsuan1117/OwnProblem/tree/master/%E8%B3%87%E8%A8%8A%E6%9C%9F%E4%B8%AD%E8%80%83/win10
    */
    int m{}, n{}, k{};
    cin >> m >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    bool ok = true;
    bool all_devide = (arr.back() % k == 0 ? true : false);
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] % k != 0)
            all_devide = false;
        if (m == 1) {
            if (!(arr[i] < arr[i+1])) {
                ok = 0;
            }
        } else if (m == 2) {
            if (!(arr[i] == arr[i+1])) {
                ok = 0;
            }

        } else if (m == 3) {
            if (!(arr[i] > arr[i+1])) {
                ok = 0;
            }
        }
    }
    cout << (ok ? "1\n" : "0\n");

    cout << (all_devide ? "Oh, win10 I love you.\n" : "Please, I want to meet win10.\n");

    return 0;
}


