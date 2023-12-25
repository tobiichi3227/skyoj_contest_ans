#include<iostream>
using namespace std;
int main()
{
	long long n,s,p,b,a=0;
	cin>>n>>s;
	p=n+s-1;
	for(long long i=0;i<s;i++){
		cout<<p;
		for(long long j=0;j<s-i-2;j++){
			cout<<" "<<p;
		}
		if(p!=n)b=p;
		else{
			b=p+1;
		}
		for(long long k=0;k<a+1;k++){
			cout<<" "<<b;
			b++;
		}
		if(p!=n+1)a++;
		p--;
		cout<<"\n";
	}
	return 0;
}
