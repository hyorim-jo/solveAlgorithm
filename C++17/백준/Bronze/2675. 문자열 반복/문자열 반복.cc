#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        int r;
        string data;
        cin >> r;
        cin >> data;
        
        for(int j = 0; j < data.length(); j++)
        {
            for(int k = 0; k < r; k++)
                cout << data[j];
        }
        
        cout << endl;
    }

    return 0;
}