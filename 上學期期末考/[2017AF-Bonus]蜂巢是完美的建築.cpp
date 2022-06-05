#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    //使用原code,必須優化
    /*
    .1.1.1.1.1.
   .............
  .3.3.3.3.3.3.3.
 .................
.5.5.5.5.5.5.5.5.5.
 .................
  .3.3.3.3.3.3.3.
   .............
    .1.1.1.1.1.

    */
    long long int a,b,c,d=1,e=1,f=0,g=0,h=0,i=1,j,k;
	cin>>a;
	if(a%2==0){
		for(c=a-1;c>0;c--){
			for(d=a-e;d>0;d--){
			cout<<" ";
		}
		e++;
		for(f=a*2+1+g;f>0;f--){
			if(c%2==0)
			cout<<".";
			else{
				if(h==0){
					cout<<".";
					h=1;
				}
				else{
					cout<<i;
					h=0;
				}
			}
		}
		cout<<endl;
		g=g+2;
		h=0;
		i=i+1;
		}
		for(k=4*a-1;k>0;k--){
			cout<<".";
		}
		cout<<endl;
	e=0;
	g=3;
	i=i-1;
	for(c=a-1;c>0;c--){
		for(d=1+e;d>0;d--){
			cout<<" ";
		}
		e++;
		for(f=4*a-g;f>0;f--){
			if(c%2==0)
			cout<<".";
			else{
				if(h==0){
					cout<<".";
					h=1;
				}
				else{
					cout<<i;
					h=0;
				}
			}
		}
		h=0;
		g=g+2;
		i=i-1;

		cout<<endl;
	}
}
	if(a%2==1){
		for(c=a;c>0;c--){
		for(d=a-e;d>0;d--){
			cout<<" ";
		}
		e++;
		for(f=a*2+1+g;f>0;f--){
			if(c%2==0)
			cout<<".";
			else{
				if(h==0){
					cout<<".";
					h=1;
				}
				else{
					cout<<i;
					h=0;
				}
			}
		}
		cout<<endl;
		g=g+2;
		h=0;
		i=i+1;
	}
	e=0;
	g=3;
	i=i-2;
	for(c=a-1;c>0;c--){
		for(d=1+e;d>0;d--){
			cout<<" ";
		}
		e++;
		for(f=4*a-g;f>0;f--){
			if(c%2==0){
				cout<<".";
			}
			else{
				if(h==0){
					cout<<".";
					h=1;
				}
				else{
					cout<<i;
					h=0;
				}
			}
		}
		h=0;
		g=g+2;
		i=i-1;

		cout<<endl;
	}
	}

    return 0;
}


