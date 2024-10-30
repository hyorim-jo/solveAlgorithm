#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    // 숫자 n개를 입력 받는다
    string number;
    cin >> number;
    
    int sum = 0; // 합계 출력을 위한 변수
    
    for(int i = 0; i < n; i++)
        sum += number[i] - '0';
        // 0의 아스키코드 값을 이용해 int로 변환
        // stoi 함수를 사용해도 됨
    
    cout << sum;
    
    return 0;
}