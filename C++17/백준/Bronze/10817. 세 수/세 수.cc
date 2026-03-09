#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)
    vector<int> numbers(3);
    for (int i{}; i < 3; i++) {
        cin >> numbers[i];
    }

    // 두 번째로 큰 정수를 출력한다.
    sort(numbers.begin(), numbers.end());
    
    cout << numbers[1];
    
    return 0;
}