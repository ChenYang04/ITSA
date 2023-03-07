#include <iostream>
using namespace std;

int main()
{
    float x, y;

    cin >> x >> y;

    if ((x <= 100) | (y <= 100))
    {
        cout << "inside";
    }
    else cout << "outsite";
}

