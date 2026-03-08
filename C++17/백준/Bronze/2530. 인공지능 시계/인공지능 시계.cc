#include <iostream>
using namespace std;

int main() {
    // 현재 시각
    int h{}, m{}, s{};
    cin >> h >> m >> s;

    // 요리하는데 필요한 시간 (초 단위)
    int d{};
    cin >> d;

    // 초 단위를 시간, 분, 초로 변환
    s = s + d;
    if (s >= 60) {
        m = m + (s / 60);
        s = s % 60;
    }

    if (m >= 60) {
        h = h + (m / 60);
        m = m % 60;
    }

    if (h >= 24) {
        h = h % 24;
    }

    cout << h << " " << m << " " << s;
    
    return 0;
}