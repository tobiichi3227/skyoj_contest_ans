#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    //用原code，之後修正
    int n,sum=0;
	cin>>n;
	bool b=false;
	for(int j=1;j<=n;j++){
		for(int i=2;i<=j-1;i++){
		if(j%i==0){
			b=true;
			}
		}
		if(b==true){
			for(int l=2;l<=j-1;l++){
				if(j%l==0){
					sum=sum+l;
				}
			}
			if(sum!=0){
				cout<<"SOF("<<j<<")="<<sum<<endl;sum=0;
			}
		}
	}

    return 0;
}
