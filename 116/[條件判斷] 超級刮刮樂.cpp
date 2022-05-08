#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        不清楚題序是什麼，目前使用原code，之後修改
    */
    int a{} ,b{}, sum{};
    cin>>a>>b;
    int c{ a/10 }, d{ b/10 }, e{ a%10 }, f{ b%10 };

    if (c == d || e == f || e == d) {
        sum += 50;
    }
    if (a % 2) {
        sum += 100;
    }
    if (f == 2 || f == 5 || f == 8) {
        sum += 100;
    }
    if (a == b) {
        sum += 200;
    }
    if (!sum) {
        sum += 250;
    }
    sum -= 500;
    cout<<sum<<'\n';

    return 0;
}

