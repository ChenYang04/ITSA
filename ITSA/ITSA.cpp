#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    
    int d;
    float i;
    cin >> d;
    
    i = d * 1.6;
    
    cout << fixed << setprecision(1) <<i << endl; //setprecision(1) 直接取小數點1位

    return 0;
}

