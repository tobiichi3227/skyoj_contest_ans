#include <bits/stdc++.h>
using namespace std;

// #include<bits/extc++.h>
// using namespace __gnu_pbds;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using ll = long long;
using pii = std::pair<int, int>;
#define pb push_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &(x) : (arr))
#define c_each(x, arr) for (const auto &(x) : (arr))
#define rep(i, j, k) for (int (i) = (j); (i) <= (k); ++(i))
#define print(str) cout << (str)

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

void solve()
{
    /*
        不知道題序是什麼，目前使用原code，之後修改
    */
    int a,b,c,d,e,f,g,h,i,fifi,fise,t1,t2,t3,t4,t5;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	if((a<20||a>41)&&(b<0||b>2)){
		cout<<"Terrible Fake\n";
	}
	else if(a<20||a>41){
		cout<<"Fake city\n";
	}
	else if(b<0||b>2){
		cout<<"The fourth gender\n";
	}
	else{
		fifi=a%10;
		fise=a/10;
		t1=fifi*2+fise*3;
		t2=1*b+2*c+3*d+4*e+5*f+6*g+7*h+8*i;
		t3=t1+t2;
		t4=t3%10;
		t5=10-t4;
		if(t4==0) cout<<"0\n";
		else cout<<t5<<endl;
	}
}

int main()
{
    miyuki_is_my_wife;

    int tc{1};
    // cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}


