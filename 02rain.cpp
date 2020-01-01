#include <iostream>
using namespace std;

int main() {
    int i,j;  // i a:天數,j b:時段
    int a = 0;
    int b = 0;
    float dayRain = 0;
    float timeRain = 0;
    float dayRainsum = 0;
    float timeRainsum = 0;
    double day[7][4];
    int array[28];
    
    for(i = 0; i < 7; i++) {
        dayRain = 0;
        for(j = 0; j < 4; j++) {
            cout << "\n請輸入第" << i + 1 << "天第" << j + 1 << "時段雨量:";
            cin >> day[i][j];
            dayRain += day[i][j];
        }
        if(dayRainsum < dayRain) {
            dayRainsum = dayRain;
            a = i;
        } else {
            continue;
        }
    }
    for(j = 0; j < 4; j++) {
       timeRain = 0;
        for(i = 0; i < 7; i++) {
            timeRain += day[i][j];
        }
        if(timeRainsum < timeRain) {
           timeRainsum = timeRain;
          b = j;
      }
    }
    cout << "第" << a + 1 << "天降雨最多\n";
    cout << "第" << b + 1 << "時段降雨最多(M=1,A=2,N=3,E=4)";
}
