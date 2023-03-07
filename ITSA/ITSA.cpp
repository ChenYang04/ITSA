#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c, d;
	cin >> a >> c ;
	int i,j;
	int x, y;
	int z;

	switch (a)
	{
	case 13:
		i = 1 * 60;
		break;
	case 14:
		i = 2 * 60;
		break;
	case 15:
		i = 3 * 60;
		break;
	case 16:
		i = 4 * 60;
		break;
	case 17:
		i = 5 * 60;
		break;
	case 18:
		i = 6 * 60;
		break;
	case 19:
		i = 7 * 60;
		break;
	case 20:
		i = 8 * 60;
		break;
	case 21:
		i = 9 * 60;
		break;
	case 22:
		i = 10 * 60;
		break;
	case 23:
		i = 11 * 60;
		break;
	case 24:
		i = 12 * 60;
		break;
	}
	switch (c)
	{
	case 13:
		j = 1 * 60;
		break;
	case 14:
		j= 2 * 60;
		break;
	case 15:
		j= 3 * 60;
		break;
	case 16:
		j = 4 * 60;
		break;
	case 17:
		j = 5 * 60;
		break;
	case 18:
		j = 6 * 60;
		break;
	case 19:
		j = 7 * 60;
		break;
	case 20:
		j = 8 * 60;
		break;
	case 21:
		j = 9 * 60;
		break;
	case 22:
		j = 10 * 60;
		break;
	case 23:
		j = 11 * 60;
		break;
	case 24:
		j = 12 * 60;
		break;
	}

	z = i + j;
	cout << z <<endl;
}

