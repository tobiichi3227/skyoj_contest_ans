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
    for (int i = 0; i < n - 1; ++i) {
        if (m == 1) {
            if (!(arr[i] < arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }
        } else if (m == 2) {
            if (!(arr[i] == arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }

        } else if (m == 3) {
            if (!(arr[i] > arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }
        }
    }
    if (ok) {
        cout <<"1\n";
    }
    bool is_all_devide = true;
    for (auto &i : arr) {
        if (i % k != 0) {
            is_all_devide = false;
            break;
        }
    }
    if (is_all_devide) {
        cout << "Oh, win10 I love you.\n";
    } else {
        cout << "Please, I want to meet win10.\n";
    }

    return 0;
}


