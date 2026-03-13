#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(2);
    for (auto& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

    // 최대공약수
    for (int i = v[1]; i > 0; i--) {
        if(v[1] % i == 0 && v[0] % i == 0) {
            cout << i << "\n";
            break;
        }
    }

    // 최소공배수
    for (int i = 1; i < v[1] + 1 ; i++) {
        if((v[0] * i) % v[1] == 0) {
            cout << v[0] * i << "\n";
            break;
        }
    }
    
    return 0;
}