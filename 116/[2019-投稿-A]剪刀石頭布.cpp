#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    int a{}, b{};
    cin >> a >> b;
    if(a==5&&b==0)
        cout<<"A wins!!"<<endl;
    else if(a==0&&b==2)
        cout<<"A wins!!"<<endl;
    else if(a==2&&b==5)
        cout<<"A wins!!"<<endl;
    else if(a==5&&b==2)
        cout<<"B wins!!"<<endl;
    else if(a==2&&b==0)
        cout<<"B wins!!"<<endl;
    else if(a==0&&b==5)
        cout<<"B wins!!"<<endl;
    else if(a == b)
        cout<<"Both win!!"<<endl;
    else
        cout<<"Are you kidding me?"<<endl;

    return 0;
}
