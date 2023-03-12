#include <iostream>
using namespace std;

int main() {
    int start_hour, start_minute; // 宣告開始時間的小時和分鐘
    int end_hour, end_minute; // 宣告離開時間的小時和分鐘
    int total_minutes; // 總停車時間（單位：分鐘）
    int total_fee; // 總停車費用

    // 讀入開始時間
    cout << "請輸入開始時間（小時 分鐘）：";
    cin >> start_hour >> start_minute;

    // 讀入離開時間
    cout << "請輸入離開時間（小時 分鐘）：";
    cin >> end_hour >> end_minute;

    // 將開始時間和離開時間轉換成總停車時間（單位：分鐘）
    total_minutes = (end_hour - start_hour) * 60 + (end_minute - start_minute);

    // 計算停車費用
    if (total_minutes <= 120) { // 不到 2 小時
        total_fee = (total_minutes + 29) / 30 * 30;
    }
    else if (total_minutes < 240) { // 超過 2 小時但不到 4 小時
        total_fee = 240 + (total_minutes - 120 + 29) / 30 * 40;
    }
    else { // 超過 4 小時以上
        total_fee = 480 + (total_minutes - 240 + 29) / 30 * 60;
    }

    // 輸出停車費用
    cout << "停車費用為：" << total_fee << " 元" << endl;

    return 0;
}









