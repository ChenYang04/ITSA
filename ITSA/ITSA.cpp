#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int str_h, str_m, end_h, end_m;
	double fee = 0;
	cin >> str_h >> str_m;
	cin >> end_h >> end_m;
	double x = (end_h - str_h) + (end_m - str_m) / 60;
	if (x <= 2.0)
	{
		fee = ceil(x * 2) * 30.0;
	}
	else if (x <= 4.0)
	{
		fee = 120.0 + ceil((x - 2.0) * 2) * 40.0;
	}
	else
	{
		fee = 280.0 + ceil(x - 4.0) * 60.0;
	}
	cout << fee  << endl;
	return 0;
}














