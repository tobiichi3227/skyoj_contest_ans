#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    //使用原code，之後修改
    int n{};
	cin >> n;

	for(int a=1; a<=n; a++){
		for(int i=1; i<=n-a; i++)
			cout << " ";
		for(int j=1; j<=2*n; j++)
			cout << a;
		for(int k=1; k<=2*a-1;k++)
			cout << ".";
		cout << '\n';
	}

	for(int a=1; a<n; a++){
		for(int i=1; i<=a; i++)
			cout << " ";
		for(int j=1; j<=2*n; j++)
			cout << n-a ;
		for(int k=1; k<=(n-a)*2-1;k++)
			cout << ".";
		cout << '\n';
	}

    return 0;
}


