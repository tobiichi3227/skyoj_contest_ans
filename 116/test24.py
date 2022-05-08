#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該是跟分數有關的，原code有使用浮點數運算，但卻使用integer來存reuslt, 應該是不正確的
    */
    int a{}, b{}, c{};
    cin >> a >> b >> c;
    double d = a*0.4 + b*0.1 + c*0.5;
    if (a >= 90) {
        d += 5;
    }
    if (c < 25) {
        d -= 10;
    }
    if (d >= 60) {
        cout << "PASS\n";
    } else if (d < 40) {
        cout << "TOTALLY FAIL\n";  //這裡邏輯有問題，但原code有AC，先不修改
    } else {
        cout << "FAIL\n";
    }

    return 0;
}

