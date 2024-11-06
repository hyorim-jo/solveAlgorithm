#include <iostream>
using namespace std;

int main()
{
    // 생산 비용: a + (b*n)
    // 판매 수익: c*n
    // 손익 분기점: 수익 - 비용 > 0
    // c*n - (a + b*n)
    // c*n - b*n > a
    // n(c-b) > a
    
    int a, b, c;
    cin >> a >> b >> c;
    
    if(c - b <= 0)
    {
        cout << "-1";
        return 0;
    }
    else
        cout << (a / (c - b)) + 1;
    
    return 0;
}