#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

const int MAX_A = 1e5;

int main() {
    miyuki_is_my_wife_and_sister;

    ll* arr = (ll*)calloc(0, sizeof(ll) * MAX_A);
    if (arr == nullptr) {
        return 0;
    }
    int n{}, i{}, t{};
    cin >> arr[0] >> arr[1] >> arr[2] >> n;
    t = arr[1] / arr[0];
    while (arr[i] < n) {
        arr[i + 1] = arr[i] * t;
        i++;
    }

    cout << i + 1 << '\n';

    free(arr);
    arr = nullptr;

    return 0;
}


