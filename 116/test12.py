#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        應該類似kattis-mia那題，目前使用原code，之後修改
    */
    int a{}, b{};
    cin >> a >> b;
    if (a!=5 && a!=2 && a!=0)
        cout<<"Player Win!\n";
    else if (b!=5 && b!=2 && b!=0)
        cout<<"BetaCome Win!\n";
    else {
        if (a==5 && b==0)
            cout<<"BetaCome Win!\n";
        else if (a==5 && b==2)
            cout<<"Player Win!\n";
        else if (a==5 && b==5)
            cout<<"Tie!\n";
        else {
            if (a==2 && b==0)
                cout<<"Player Win!\n";
            else if (a==2 && b==2)
                cout<<"Tie!\n";
            else if (a==2 && b==5)
                cout<<"BetaCome Win!\n";
        }

        if (a==0 && b==0)
            cout<<"Tie!\n";
        else if (a==0 && b==2)
            cout<<"BetaCome Win!\n";
        else if (a==0 && b==5)
            cout<<"Player Win!\n";

    }

    return 0;
}

