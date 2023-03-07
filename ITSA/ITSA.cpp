#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "請輸入一個整數 (-128~127): ";
    cin >> num;


    for (int i = 7; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}
