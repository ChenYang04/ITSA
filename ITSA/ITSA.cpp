#include <iostream>
using namespace std;

	int main()
	{
		int n, nx = 0;
		cin >> n;
		int tn = n;
		while (tn)
		{
			nx = nx * 10 + tn % 10;
			tn /= 10;
		}
		cout << (n == nx ? "YES" : "NO") << endl;
		return 0;
	}


