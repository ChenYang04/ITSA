#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int height, gender;
    float z1;
    cin >> height >> gender;
    if (gender == 1)
    {
        z1 = (height - 80) * 0.7;
        cout << fixed << setprecision(1) << z1 << endl;
    }
    else if (gender == 2)
    {
        z1 = (height - 70) * 0.6;
        cout << fixed << setprecision(1) << z1 << endl;
    }
    return 0;
}


