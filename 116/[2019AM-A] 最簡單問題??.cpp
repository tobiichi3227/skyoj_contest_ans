#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(container) (container).begin(), (container).end()
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        簡單的三角形判斷
    */
    vector<ll> arr(3); //原code用long long，不確定題目有沒有卡long long
    for (auto &i : arr) {
        cin >> i;
    }
    sort(all(arr));
    if (arr[2] >= (arr[1] + arr[0])) {
        cout << "Invalid\n";
        return;
    }
    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2]) {
        cout << "Equilateral\n";
    } else if (arr[0] || arr[1] && arr[1] || arr[2] && arr[0] || arr[2]) {
        cout << "Isosceles\n";
    } else {
        cout << "Scalene\n";
    }
    return 0;
}

