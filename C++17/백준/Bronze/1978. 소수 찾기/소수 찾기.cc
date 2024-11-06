#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    
    vector<bool> arr(n,true);
    
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(num == 1)
        {
            arr[i] = false;
            continue;
        }
        for(int j = 2; j < num; j++)
        {
            if(num % j == 0)
            {
                arr[i] = false;
                break;
            }
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == true) ans++;
    }
    
    cout << ans;
    
    return 0;
}