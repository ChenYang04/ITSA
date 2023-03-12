#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    
    int d,c;
    float i,j;
    cin >> d >> c;
    
    i = d * 1.6;
    j = c * 1.6;
    cout << fixed << setprecision(1) <<i << '\n' << flush << j << endl; //setprecision(1) 直接取小數點1位

    return 0;
}

