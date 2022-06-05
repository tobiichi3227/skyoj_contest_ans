#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

	int h{}, b{};
	cin>> b >> h;

	for(int i = 1; i <= h; ++i) {
		for(int k = i - 1; k > 0; --k) {
			cout << " ";
		}

        for(int j = 0; j < b; ++j) {
            cout << "*";
        }

        cout<<"\n";
	}

	cout << "Height: "<< h << '\n';
	cout << "Base: "  << b << '\n';
	cout << "Area: "  << h << "*" << b << "=" << b*h << '\n';

	return 0;
}

