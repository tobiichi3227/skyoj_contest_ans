#include <iostream>
using namespace std;



int main()
{
	long long x,y;
	int n,dir,L;
	cin >> x >> y >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> dir >> L;
		if(dir == 1) y+=L;
		else if(dir == 2) y-=L;
		else if(dir == 3) x -=L;
		else x+=L;
	}
	cout << '('<< x <<','<< y<<")\n";
	return 0;
}
