#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 圓心座標
    int center_x = 0;
    int center_y = 0;
    // 圓半徑
    int radius = 100;

    // 輸入座標
    int x, y;
    cin >> x >> y;

    // 計算座標到圓心的距離
    double distance = sqrt(pow(x - center_x, 2) + pow(y - center_y, 2));

    // 判斷是否在圓形範圍內
    if (distance <= radius) {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }

    return 0;
}
