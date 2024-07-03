#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string data;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int ans = 0, scr = 0;
        
        cin >> data;
        for(int j = 0; data[j] == 'O' || data[j] == 'X'; j++)
        {
            if(data[j] == 'O')
            {
                scr++;
                ans += scr;
            }
            else scr = 0;
        }
        cout << ans << endl;
    }

    return 0;
}
