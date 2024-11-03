#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
    // 수를 인덱스로 저장할 배열
    int arr[10001] = {0};
    
    int n;
    cin >> n; // 수의 개수
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    
    for(int i = 0; i < 10001; i++)
        // 같은 수가 여러번 입력되는 경우도 고려
        for(int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    
    return 0;
}