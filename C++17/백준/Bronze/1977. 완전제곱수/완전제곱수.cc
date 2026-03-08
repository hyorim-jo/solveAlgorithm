#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    int sum = 0, minimum = 0;

    for(int i = n; i >= m; i--) {
        int sq = (int)sqrt(i);
            
        if (sq * sq == i) {   
            minimum = i;
            sum += minimum;
        }
    }
        
    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << endl;
        cout << minimum;
    }
    
    return 0;
}