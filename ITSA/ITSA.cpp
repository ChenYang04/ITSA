#include <iostream>
using namespace std;

int main()
{
	int n1, n2;

	cin >> n1 >> n2;
	int n;
	
	while (n1 > 0 and n2 > 0)
	{
		if (n1 > n2)
		{
			n1 = n1 % n2;
		}
		else if (n2 > n1)
		{
			n2 = n2 % n1;
		}
	}
	if (n1 > n2)
	{
		cout << n1 << endl;
	}
	else if (n2 > n1)
	{
		cout << n2 << endl;
	}
}


