#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
    string input;
    getline(cin, input);
    
    int cnt = 1;
    
    if(input.size()==1 && input[0] == ' ') cout << '0';
    else
    {
        for(int i = 1; i < input.length()-1; i++)
            if(input[i] == ' ') cnt++;
            
        cout << cnt;
    }
    
    return 0;
}