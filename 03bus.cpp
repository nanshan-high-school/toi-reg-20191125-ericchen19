#include <iostream>
using namespace std;

int main() {
    int n,i,h,m;
    int time[20] = {0};
    int newtime[i];
    cout << "請輸入公車一共經過幾站：";
    cin >> n;
    cout << "\n請輸入出發時間小時：";
    cin >> h;
    cout << "\n請輸入出發時間分鐘：";
    cin >> m;
    h = h * 60;
    time[0] = h + m;
    while(time[0] >= 1440) {
        if(time[0] >= 1440) {
            time[0] = time[0] - 1440;
        }
    }
    int total = 0;
    for(i = 1;i <= n; i++) {
        cout << "\n到第" << i << "站所需要幾分鐘：";
        cin >> m;
        total += m;
        time[i] = time[0] + total;
        while(time[i] >= 1440) {
            if(time[i] >= 1440) {
                time[i] = time[i] - 1440;
            }
        }
    }
    int p;
    do {
        cout << "\n請輸入欲查詢的站牌：";
        cin >> p;
        h = time[p] / 60;
        m = time[p] % 60;         
        cout << "\n到站時間為" << h << "點" << m << "分";
    } while(p != 0);
}
