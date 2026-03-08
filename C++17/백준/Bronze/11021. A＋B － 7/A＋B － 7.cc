#include <iostream>
using namespace std;

int main() {
    // 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
    int t{};
    cin >> t;

    for (int i = 1; i <= t; i++) {
        // 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
        int a{}, b{};
        cin >> a >> b;

        // 각 테스트 케이스마다"Case #x: "를 출력한 다음,
        // A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
        cout << "Case #" << i << ": " << a + b << "\n";
    }
    
    return 0;
}