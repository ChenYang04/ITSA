#include <iostream>
#include <cmath>
using namespace std;

int main() {
    

    int s_hour, s_minute, e_hour, e_minute;
    cout << "請輸入開始時間（時 分）：";
    cin >> s_hour >> s_minute;

    cout << "請輸入離開時間（時 分）：";
    cin >> e_hour >> e_minute;

    
    int elapsed_minutes = (e_hour - s_hour) * 60 +((e_minute + (60 - s_minute)));// 計算停車時間（單位：分鐘）

    // 計算停車費用
    int parking_fee = 0;
    if (elapsed_minutes <= 120) 
    {  
        parking_fee = 30;// 停車時間在 2 小時以內
    }
    else if (elapsed_minutes <= 240) 
    {  
        parking_fee = 120 + ((elapsed_minutes - 120) / 30) * 40;// 停車時間在 2 ~ 4 小時之間
    }
    else 
    {
        parking_fee = 240 + ((elapsed_minutes - 240) / 30) * 60;// 停車時間超過 4 小時
    }

    
    cout << "停車費用為：" << parking_fee << " 元\n";// 輸出結果

    return 0;
}









