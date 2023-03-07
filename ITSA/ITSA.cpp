#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    cout << "輸入欲轉換之英哩數:";
    int d;
    float i;
    cin >> d;

    i = d * 1.6;
    
    cout << fixed << setprecision(1) <<i << endl;


}

