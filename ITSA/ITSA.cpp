#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int center_x = 0;
    int center_y = 0;

    int radius = 100;

    int x, y;
    cin >> x >> y;

    double distance = sqrt(pow(x - center_x, 2) + pow(y - center_y, 2));

    if (distance <= radius) {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }

    return 0;
}
