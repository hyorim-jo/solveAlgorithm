#include <iostream>
using namespace std;

int main()
{
    int n; // 참가자 수
    cin >> n;
    
    int size[6]; // 티셔츠 사이즈
    for(int i = 0; i < 6; i++)
        cin >> size[i];
        
    int t, p; // 티셔츠와 펜의 묶음 수
    cin >> t >> p;
    
    int temp = 0;
    for(int i = 0; i < 6; i++)
    {
        if(size[i] % t != 0) temp += size[i]/t + 1;
        else temp += size[i]/t;
    }
    
    cout << temp << endl;
    cout << n/p << " " << n%p;

    return 0;
}