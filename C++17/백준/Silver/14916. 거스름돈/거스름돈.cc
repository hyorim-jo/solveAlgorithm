#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    
    cin >> n;
    
    while(n > 0)
    {
        if(n == 1 || n == 3)
        {
            cout << "-1";
            return 0;
        }
        else if(n % 5 == 0)
        {
            cnt += n / 5;
            break;
        }
        else
        {
            n -= 2;
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}