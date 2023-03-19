宣告變數n、nx = 0
讀取n
宣告tn=n
while迴圈條件式tn不等於0
運算式
nx = nx * 10 + tn % 10; tn 的個位數加到 nx 的十位數上，然後將 nx 左移一位
tn /= 10; tn去掉最後一位數。 
cout << (n == nx ? "YES" : "NO") << endl; 如果變數 n 和 nx 的值相等 顯示YES 否則 顯示NO
