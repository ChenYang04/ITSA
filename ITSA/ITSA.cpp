#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int pn =0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			pn++;
		}
	}
	if (pn == 2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	


}


