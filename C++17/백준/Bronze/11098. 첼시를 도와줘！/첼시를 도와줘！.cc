#include <iostream>
#include <string>
using namespace std;

int main() {
    // 첫 번째 줄에는 테스트 케이스의 개수 n이 주어진다 (n≤100). 
    int n{};
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int playerNum{};
        cin >> playerNum;
        
        int maxPrice{};
        string maxName{};
        
        for (int q = 0; q < playerNum; q++) {
            int playerPrice{};
            string playerName{};
            cin >> playerPrice >> playerName;

            if (playerPrice > maxPrice) {
                maxPrice = playerPrice;
                maxName = playerName;
            }
        }

        // 각각의 테스트 케이스에서 가장 비싼 선수의 이름을 출력해야한다.
        cout << maxName << "\n";
        maxPrice = 0;
    }
    
    return 0;
}