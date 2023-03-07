#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入一個整數 (-128~127): ";
    cin >> num;

    // 利用位元運算子轉換成二進制表示
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//int main()
//{
//	int a[10];
//	int b, c;
//	int z;
//	cin >> c;
//	
//	cout << "輸入一個整數，介於-128～127之間 = ";
//
//	for (b = 0; c > 0; b++)
//	{
//		a[b] = c % 2;
//		c = c / 2;
//	}
//	for (b = b - 1; b >= 0; b--)
//	{
//		 cout << setw(8) << setfill('0') <<a[b] << endl;
//	}
//	
//	
//}

