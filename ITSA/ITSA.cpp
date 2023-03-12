#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int str_h, str_m, end_h, end_m;
	int fee = 0;
	cin >> str_h >> str_m;
	cin >> end_h >> end_m;
	int x = (end_h - str_h) + (end_m - str_m) / 60;
	if (x <= 2)
	{
		fee = ceil(x * 2) * 30;
	}
	else if (x <= 4)
	{
		fee = 120 + ceil((x - 2) * 2) * 40;
	}
	else
	{
		fee = 280 + ceil(x - 4) * 60;
	}
	cout << fee  << endl;
	return 0;
}








