#include<iostream>
using namespace std;
int main()
{
	long long int a=0 , b=1, c=0 ;
	int n ,i ,v=0;
	cin>>n;

	for (i=0; i<=n; i++)
		{
			v=v+a;
		 	c=a+b;
		 	a=b;
		 	b=c;

}

	cout << v <<endl;


	return 0;
}
