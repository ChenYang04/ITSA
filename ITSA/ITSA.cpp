#include <iostream>
using namespace std;

int main()
{
	int a1, a2, a3, N, x,y;
	int x0, x1, x2, x3 ,x4 , x5;
	cin >> N >> a1 >> a2 >> a3;

	x = a1 * 15 + a2 * 20 + a3 * 30;
	y = N - x;
	if (x <= N)
	{
		x0 = y / 50;
		x3 = y % 50;

		x1 = x3 / 5;
		x4 = x3 % 5; 

		x2 = x4 / 1;
		x5 = y % 1;
		cout << x2 << x1 << x0 << endl;
	}
	else 
	{
		cout << 0 <<endl;
	}
}


