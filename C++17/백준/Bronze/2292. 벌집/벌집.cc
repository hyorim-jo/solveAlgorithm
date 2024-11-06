#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a = 2; int b = 7;
    
    for(int i = 1; i < n; i++)
    {
        if(a <= n && n <= b)
        {
            cout << i+1;
            return 0;
        }
        else
        {
            a = a + 6*i;
            b = b + 6*(i+1);
        }
    }
    
    cout << "1";
    
    return 0;
}